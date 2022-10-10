#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    int helper(int i , int j , vector<vector<int>>& dp, int m , int n){
        if(i == m-1 && j == n-1)    return 1;

        int xMove = 0;
        int yMove = 0;

        if(dp[i][j] != -1)  return dp[i][j];

        if(i < m-1){
            yMove = helper(i+1,j,dp,m,n);
        }

        if(j < n-1){
            xMove = helper(i,j+1,dp,m,n);
        }

        return dp[i][j] = xMove + yMove;
    }

    int uniquePaths(int m, int n) {
        
        vector<vector<int>> dp(m+1,vector<int>(n+1,-1));

        return helper(0,0,dp,m,n);
    }
};