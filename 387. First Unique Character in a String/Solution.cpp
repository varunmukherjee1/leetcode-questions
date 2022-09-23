#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        
        vector<int> chars(26,0);

        for(char c: s){
            chars[c - 'a']++;
        }

        int len = s.length();

        for(int i = 0 ; i < len ; i++){
            if(chars[s[i] - 'a'] == 1){
                return i;
            }
        }

        return -1;
    }
};