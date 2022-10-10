#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    int helper(vector<int> cost , vector<int>& dp , int i , int len){

        if(i > len-1)  return 0;

        if(dp[i] != -1) return dp[i];

        return dp[i] = (cost[i] + min(helper(cost,dp,i+1,len),helper(cost,dp,i+2,len)));
    }

    int minCostClimbingStairs(vector<int>& cost) {
        
        vector<int> dp(1001,-1);
        int len = cost.size();

        return min(helper(cost,dp,0,len),helper(cost,dp,1,len));
    }
};