#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    vector<int> findAnagrams(string s, string p) {
        
        unordered_map<char,int> dsa;
        unordered_map<char,int> test;
        vector<int> ans;

        int slen = s.length();
        int plen = p.length();

        if(slen < plen) return ans;

        for(char c : p){
            dsa[c]++;
        }

        for(int i = 0 ; i < plen ; i++){
            test[s[i]]++;
        }

        if(test == dsa){
            ans.push_back(0);
        }

        for(int i = 1 ; i < slen - plen + 1 ; i++){
            test[s[i-1]]--;
            test[s[i + plen - 1]]++;

            if(test[s[i-1]] == 0){
                test.erase(s[i-1]);
            }

            if(dsa == test) ans.push_back(i);
        }

        return ans;
    }
};