class Solution {
public:
    int helper(vector<vector<int>>& grid, int i, int j, int m, int n){

        if(i >= 0 && i < m && j >= 0 && j < n && grid[i][j] == 1){

            grid[i][j] = 0;

            return 1 + helper(grid,i+1,j,m,n) + helper(grid,i,j+1,m,n) + helper(grid,i-1,j,m,n) + helper(grid,i,j-1,m,n);
        }

        return 0;
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int m = grid.size();
        int n = grid[0].size();

        int ans = 0;

        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){

                if(grid[i][j] == 1){

                    int val = helper(grid,i,j,m,n);
                    ans = (ans > val)? ans:val;
                }
            }
        }

        return ans;
    }
};