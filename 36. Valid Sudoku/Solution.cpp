#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        unordered_set<string> st;

        for(int i = 0 ; i < 9 ; i++){
            for(int j = 0 ; j < 9 ; j++){

                if(board[i][j] == '.'){
                    continue;
                }

                string s1 = to_string(board[i][j]) + " found at row " + to_string(i);
                string s2 = to_string(board[i][j]) + " found at column " + to_string(j);
                string s3 = to_string(board[i][j]) + " found in box " + to_string(i/3) + " " + to_string(j/3);



                if(st.find(s1) != st.end() || st.find(s2) != st.end() || st.find(s3) != st.end()){
                    return false;
                }

                st.insert(s1);
                st.insert(s2);
                st.insert(s3);
                
            }
        }

        return true;
        
    }
};

int main (){

    cout<<INT_MAX<<endl;

    return 0;
}