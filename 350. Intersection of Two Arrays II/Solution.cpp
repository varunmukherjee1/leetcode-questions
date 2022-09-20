#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> vec(1001,0);

        vector<int> ans;

        for(int i : nums1){
            vec[i]++;
        }

        for(int j : nums2){
            if(vec[j] > 0){
                ans.push_back(j);
                vec[j]--;
            }
        }

        return ans;
    }
};