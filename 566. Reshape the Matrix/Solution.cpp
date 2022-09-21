#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        
        int m =  mat.size();
        int n = mat[0].size();

        if(( m == r && n == c) || (r*c != m*n)){
            return mat;
        }

        int x = 0 , y = 0;

        vector<vector<int>> vec(r,vector<int>(c));

        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){

                if(y == c){
                    y = 0;
                    x++;
                }

                vec[x][y] = mat[i][j];
                y++;
            }
        }

        return vec;

    }
};