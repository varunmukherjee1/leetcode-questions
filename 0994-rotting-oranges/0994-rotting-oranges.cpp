class Solution {
public:

    int orangesRotting(vector<vector<int>>& grid) {
        
        int m = grid.size();
        int n = grid[0].size();

        vector<vector<int>> ans(m,vector<int>(n,0));

        int t = -1;

        queue<pair<int,int>> que;
        int fresh = 0;

        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                ans[i][j] = grid[i][j];
                
                if(grid[i][j] == 1){
                    fresh++;
                }

                if(grid[i][j] == 2){
                    que.push({i,j});
                }
            }
        }

        // cout<<"fresh = "<<fresh<<endl;

        // bool changed = false;

        while(!que.empty()){

            int temp = que.size();

            while(temp--){

                pair<int,int> p = que.front();
                que.pop();

                int i = p.first;
                int j = p.second;

                // changed = false;
                int init = fresh;

                if(i + 1 < m && ans[i+ 1][j] == 1){
                    ans[i+1][j] = 2;
                    que.push({i+1,j});
                    fresh--;
                }

                if(j + 1 < n && ans[i][j+1] == 1){
                    ans[i][j+1] = 2;
                    que.push({i,j+1});
                    fresh--;
                }

                if(i - 1 >= 0 && ans[i- 1][j] == 1){
                    ans[i-1][j] = 2;
                    que.push({i-1,j});
                    fresh--;

                }

                if(j - 1 >= 0 && ans[i][j-1] == 1){
                    ans[i][j-1] = 2;
                    que.push({i,j-1});
                    fresh--;
                }
            }

            t++;
        }

        if(fresh > 0){
            return -1;
        }

        if( t == -1)
            return 0;

        return t;
    }
};