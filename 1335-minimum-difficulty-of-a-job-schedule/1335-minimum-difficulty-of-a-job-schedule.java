
class Solution {

    int helper(int[] jobDifficulty , int d , int[][] dp , int idx){

        int len = jobDifficulty.length;

        if(d == 1){
            int max = 0;


            while(idx < len){
                max = Math.max(max,jobDifficulty[idx++]);
            }

            return max;
        }

        if(dp[d][idx] != -1)    return dp[d][idx];

        int max = 0;
        int ans = Integer.MAX_VALUE;

        for(int i = idx ; i < len - d + 1 ; i++){
            max = Math.max(max,jobDifficulty[i]);
            ans = Math.min(ans,max + helper(jobDifficulty, d - 1, dp, i + 1));
        }

        return dp[d][idx] = ans;
    }


    public int minDifficulty(int[] jobDifficulty, int d) {

        int len = jobDifficulty.length;

        if(d > len) return -1;

        int[][] dp = new int[d+1][len];

        for(int i = 0 ; i <= d ; i++){
            Arrays.fill(dp[i],-1);
        }

        return helper(jobDifficulty,d,dp,0);        
    }
}