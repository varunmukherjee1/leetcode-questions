#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        int rlen = ransomNote.length();
        int mlen = magazine.length();

        unordered_map<char,int> mp;

        for(char c : magazine){
            mp[c]++;
        }

        for(char c : ransomNote){
            if(mp[c] == 0){
                return false;
            }
            
            mp[c]--;
        }

        return true;
    }
};