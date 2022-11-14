class Solution {
public:

    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        
        int m = mat.size();
        int n = mat[0].size();

        vector<vector<int>> vec(m,vector<int>(n,-1));

        queue<pair<int,int>> q;

        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                
                if(mat[i][j] == 0){
                    vec[i][j] = 0;
                    q.push({i,j});
                }
            }
        }

        while(!q.empty()){

            int i = q.front().first;
            int j = q.front().second;
            q.pop();

            if((i+1) < m && vec[i+1][j] == -1){
                q.push({i+1,j});
                vec[i+1][j] = vec[i][j] + 1;
            }

            if((j+1) < n && vec[i][j+1] == -1){
                q.push({i,j+1});
                vec[i][j+1] = vec[i][j] + 1;
            }

            if((j-1) >= 0 && vec[i][j-1] == -1){
                q.push({i,j-1});
                vec[i][j-1] = vec[i][j] + 1;
            }

            if((i-1) >= 0 && vec[i-1][j] == -1){
                q.push({i-1,j});
                vec[i-1][j] = vec[i][j] + 1;
            }
        }

        return vec;
    }
};