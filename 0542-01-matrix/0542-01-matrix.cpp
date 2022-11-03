#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        
        int m = mat.size();
        int n = mat[0].size();

        vector<vector<int>> ans(m,vector<int>(n,-1));
        queue<pair<int,int>> pq;

        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                if(mat[i][j] == 0){
                    ans[i][j] = 0;
                    pq.push({i,j});
                }
            }
        }

        while(!pq.empty()){
            pair<int,int> temp = pq.front();
            pq.pop();

            int i = temp.first;
            int j = temp.second;

            if((i+1) < m && ans[i+1][j] == -1){
                pq.push({i+1,j});
                ans[i+1][j] = ans[i][j] + 1;
            }

            if((j+1) < n && ans[i][j+1] == -1){
                pq.push({i,j+1});
                ans[i][j+1] = ans[i][j] + 1;
            }

            if((i-1) >= 0 && ans[i-1][j] == -1){
                pq.push({i-1,j});
                ans[i-1][j] = ans[i][j] + 1;
            }

            if((j-1) >= 0 && ans[i][j-1] == -1){
                pq.push({i,j-1});
                ans[i][j-1] = ans[i][j] + 1;
            }
        }

        return ans;
    }
};