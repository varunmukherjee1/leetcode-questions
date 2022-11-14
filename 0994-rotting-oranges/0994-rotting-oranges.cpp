class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        
        int ans = 0;

        queue<pair<int,int>> que;

        int m = grid.size();
        int n = grid[0].size();

        int fresh = 0;

        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                if(grid[i][j] == 1)
                    fresh++;
                
                if(grid[i][j] == 2)
                    que.push({i,j});
            }
        }

        if(fresh == 0)
            return ans;

        while(!que.empty()){

            int temp = que.size();
            int pf = fresh;

            while(temp--){

                int i = que.front().first;
                int j = que.front().second;
                que.pop();

                if((i+1) < m && grid[i+1][j] == 1){
                    que.push({i+1,j});
                    grid[i+1][j] = 2;
                    fresh--;
                }

                if((j+1) < n && grid[i][j+1] == 1){
                    que.push({i,j+1});
                    grid[i][j+1] = 2;
                    fresh--;
                }

                if((j-1) >= 0 && grid[i][j-1] == 1){
                    que.push({i,j-1});
                    grid[i][j-1] = 2;
                    fresh--;
                }

                if((i-1) >= 0 && grid[i-1][j] == 1){
                    que.push({i-1,j});
                    grid[i-1][j] = 2;
                    fresh--;
                }
            }

            if(fresh == pf)
                break;
            
            ans++;
        }

        if(fresh > 0){
            return -1;
        }

        return ans;
    }
};