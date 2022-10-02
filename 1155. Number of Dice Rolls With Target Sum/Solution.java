class Solution {

    static int mod = (int)(1e9 + 7);

    int helper(int n , int k , int target , int[][] dp){

        if(target < 0){
            return 0;
        }
        if(n == 0 && target != 0){
            return 0;
        }
        if( n != 0 && target == 0){
            return 0;
        }
        if( n == 0 && target == 0){
            return 1;
        }

        if(dp[n][target] != -1){
            return dp[n][target];
        }

        int ans = 0;

        for(int i = 1 ; i <= k ; i++){
            
            int val = helper(n-1,k,target - i , dp);

            ans = ((ans%mod) + (val%mod))%mod;
        }

        return dp[n][target] = ans;
    }

    public int numRollsToTarget(int n, int k, int target) {
        
        int[][] dp = new int[n+1][target+1];

        for(int i = 0 ; i < n+1 ; i++){
            Arrays.fill(dp[i],-1);
        }

        return helper(n,k,target,dp);
    }
}