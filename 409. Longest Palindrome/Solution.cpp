#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestPalindrome(string s) {
        
        unordered_map<char,int> mp;
        int len = s.length();

        for(int i = 0 ; i < len ; i++){
            mp[s[i]]++;
        }

        int evenCount = 0;
        int oddCount = 0;
        int oddMoreThan1 = 0;
        int oddEqualTo1 = 0;

        int ans = 0;

        for(auto p : mp){
            int temp = p.second;

            if(temp%2 == 0){
                evenCount += temp;
            }
            else{
                oddCount += temp;
                if(temp > 1)    oddMoreThan1++;
                else    oddEqualTo1++;
            }
        }

        ans += evenCount + oddCount - oddMoreThan1 - oddEqualTo1;

        if(oddCount > 0){
            ans += 1;
        }

        return ans;
    }
};