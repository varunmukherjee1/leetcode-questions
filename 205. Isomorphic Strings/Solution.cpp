#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        int slen = s.length();
        int tlen = s.length();

        if(slen != tlen){
            return false;
        }

        unordered_map<char,char> mp;
        unordered_map<char,char> mp2;

        int a = 0 , b = 0;

        bool ans = true;

        while(a < slen && b < slen){

            char c1 = s[a];
            char c2 = t[b];

            // cout<<c1<<endl;
            
            if(mp.find(c1) == mp.end()){
                // cout<<"not exist"<<endl;
                mp[c1] = c2;
            }
            else{

                char c = (*mp.find(c1)).second;

                if(c != c2){
                    // cout<<"not equal"<<endl;
                    ans = false;
                    break;
                }
            }

            if(mp2.find(c2) == mp.end()){
                // cout<<"not exist"<<endl;
                mp2[c2] = c1;
            }
            else{

                char c = (*mp2.find(c2)).second;

                if(c != c1){
                    // cout<<"not equal"<<endl;
                    ans = false;
                    break;
                }
            }
            
            
            a++;
            b++;
        }

        return ans;

    }
};