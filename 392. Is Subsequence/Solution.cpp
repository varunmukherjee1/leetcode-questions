#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int slen = s.length();
        int tlen = t.length();

        int si = 0;
        int ti = 0;

        while(si < slen && ti < tlen){

            if(s[si] == t[ti]){
                si++;
            }

            ti++;
        }

        if(si == slen){
            return true;
        }

        return false;
    }
};