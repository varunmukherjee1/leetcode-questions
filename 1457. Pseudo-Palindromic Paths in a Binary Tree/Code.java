import java.util.Arrays;

public class Code {
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

        int helper(TreeNode root , int[] arr){

            if(root == null){
                return 0;
            }

            if(root.left == null && root.right == null){

                arr[root.val]++;

                int even = 0;
                int odd = 0;

                for(int i : arr){

                    if(i%2 == 0){
                        even++;
                    }
                    else{
                        odd++;
                    }
                }

                if(odd <= 1){
                    return 1;
                }
                else{
                    return 0;
                }
            }

            arr[root.val]++;

            int[] arr1 = arr.clone();
            int[] arr2 = arr.clone();

            return (helper(root.left,arr1) + helper(root.right,arr2));
        }

        public int pseudoPalindromicPaths (TreeNode root) {

            int[] arr = new int[10];

            Arrays.fill(arr,0);

            return helper(root,arr);
        }
    }
}