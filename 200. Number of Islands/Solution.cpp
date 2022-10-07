#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    void bfs(vector<vector<char>>& grid , vector<vector<bool>>& visited, int a , int b){

        queue<pair<int,int>> que;

        que.push({a,b});
        visited[a][b] = 1;

        int n = grid.size();
        int m = grid[0].size();

        int i , j;

        while(!que.empty()){
            i = que.front().first;
            j = que.front().second;
            que.pop();

            if(j+1 < m && grid[i][j+1] == '1' && !visited[i][j+1]){
                visited[i][j+1] = 1;
                que.push({i,j+1});
            }

            if(i+1 < n && grid[i+1][j] == '1' && !visited[i + 1][j]){
                visited[i+1][j] = 1;
                que.push({i+1,j});
            }

            if(j-1 >= 0 && grid[i][j-1] == '1' && !visited[i][j-1]){
                visited[i][j-1] = 1;
                que.push({i,j-1});
            }

            if(i-1 >= 0 && grid[i-1][j] == '1' && !visited[i - 1][j]){
                visited[i-1][j] = 1;
                que.push({i-1,j});
            }
            
        }

    }

    void dfs(vector<vector<char>>& grid , vector<vector<bool>>& visited, int a , int b){

    }

    int numIslands(vector<vector<char>>& grid) {
        
        int ans = 0;
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<bool>> visited(n,vector<bool>(m,0));

        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(!visited[i][j] && grid[i][j] == '1'){
                    ans++;
                    bfs(grid,visited,i,j);
                    // dfs(grid,visited,i,j);
                }
            }
        }

        return ans;
        
    }
};