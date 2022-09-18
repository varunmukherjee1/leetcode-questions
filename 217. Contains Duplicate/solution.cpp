#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        int len = nums.size();

        unordered_set<int> st;

        for(int i : nums){
            st.insert(i);
        }

        if(len == st.size())
            return false;
        else
            return true;

    }
};