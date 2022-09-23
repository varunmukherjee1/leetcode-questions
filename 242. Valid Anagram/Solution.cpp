#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        int rlen = s.length();
        int mlen = t.length();

        if(rlen != mlen){
            return false;
        }

        unordered_map<char,int> mp;

        for(char c : s){
            mp[c]++;
        }

        for(char c : t){
            if(mp[c] == 0){
                return false;
            }
            
            mp[c]--;
        }

        return true;
    }
};