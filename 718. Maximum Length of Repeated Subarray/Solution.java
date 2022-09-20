import java.util.Arrays;
import java.util.HashSet;

class Solution {
    public static int findLength(int[] nums1, int[] nums2) {
        
        int m = nums1.length;
        int n = nums2.length;

        int[][] dp = new int[m+1][n+1];

        for(int i = 0 ; i <= m ; i++){    
            dp[i][0] = 0;
        }

        for(int i = 1 ; i <= n ; i++){    
            dp[0][i] = 0;
        }

        for(int i = 1 ; i <= m ; i++){
            for(int j = 1 ; j <= n ; j++){
                if(nums1[i-1] == nums2[j-1]){
                    dp[i][j] = dp[i-1][j-1] + 1;
                }
                else{
                    dp[i][j] = 0;
                }
            }
        }

        for(int i = 0 ;i <= m ; i++){
            System.out.println(Arrays.toString(dp[i]));
        }

        int ans = 0;

        for(int i = 1 ; i <= m ; i++){
            for(int j = 1 ; j <= n ; j++){
                ans = Integer.max(ans,dp[i][j]);
            }
        }

        return ans;
    }

    public static void main(String[] args) {
        int[] arr1 = {1,2,3,2,1};
        int[] arr2 = {3,2,1,4,7};

        findLength(arr1, arr2);

    }
}