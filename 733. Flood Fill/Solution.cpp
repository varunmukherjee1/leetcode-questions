#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    void helper(vector<vector<int>> &image , int sr , int sc , int color , int prev){

        int n = image.size();
        int m = image[0].size();

        if(sr < 0 || sr >= n || sc < 0 || sc >= m)  return;

        if(image[sr][sc] != prev)   return;

        if(image[sr][sc] == color)  return;

        image[sr][sc] = color;

        helper(image,sr+1,sc,color,prev);
        helper(image,sr,sc+1,color,prev);
        helper(image,sr-1,sc,color,prev);
        helper(image,sr,sc-1,color,prev);
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {

        helper(image,sr,sc,color,image[sr][sc]);

        return image;

    }
};