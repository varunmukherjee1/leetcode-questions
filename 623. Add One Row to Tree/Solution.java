
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
 
class Solution {
    public TreeNode addOneRow(TreeNode root, int val, int depth) {

        if(root == null)    return root;
        
        if(depth == 1){
            TreeNode temp = new TreeNode(val,root,null);
            return temp;
        }
        
        if(depth == 2){
            TreeNode left = new TreeNode(val,root.left,null);
            TreeNode right = new TreeNode(val,null,root.right);

            root.left = left;
            root.right = right;

            return root;
        }

        root.left = addOneRow(root.left, val, depth-1);
        root.right = addOneRow(root.right, val, depth-1);

        return root;
    }
}