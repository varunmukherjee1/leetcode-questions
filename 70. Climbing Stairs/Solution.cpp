#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    int helper(int n , vector<int> &dp){

        if(n < 0)   return 0;
        
        if(n == 0)  return 1;

        if(dp[n] != -1) return dp[n];

        int v1 = helper(n-1,dp);
        int v2 = helper(n-2,dp);

        return dp[n] = v1 + v2;
    }

    int climbStairs(int n) {
        
        vector<int> dp(46,-1);

        return helper(n,dp);
    }
};