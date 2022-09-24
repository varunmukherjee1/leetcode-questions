import java.util.ArrayList;

// Definition for a binary tree node.

public class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;
    TreeNode() {}
    TreeNode(int val) { this.val = val; }
    TreeNode(int val, TreeNode left, TreeNode right) {
        this.val = val;
        this.left = left;
        this.right = right;
    }
}

public class Solution {

    void helper(TreeNode root ,int sum , int target , ArrayList<Integer> pathList , List<List<Integer>> finalList){

        if(root == null){
            return;
        }

        sum += root.val;

        if(root.left != null){

            ArrayList<Integer> newps = (ArrayList)pathList.clone();
            newps.add(root.val);

            helper(root.left , sum , target , newps, finalList);
        }

        if(root.right != null){

            ArrayList<Integer> newps = (ArrayList)pathList.clone();
            newps.add(root.val);

            helper(root.right , sum , target , newps, finalList);
        }

        if(root.left == null && root.right == null){
            if(sum == target){
                ArrayList<Integer> newps = (ArrayList)pathList.clone();
                newps.add(root.val);

                finalList.add(newps);
            }
        }
    }

    public List<List<Integer>> pathSum(TreeNode root, int targetSum) {
        
        List<List<Integer>> ans = new ArrayList<>();
        ArrayList<Integer> temp = new ArrayList<>();

        helper(root,0,targetSum,temp,ans);

        return ans;
    }
}