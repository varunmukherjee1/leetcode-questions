#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        vector<int> temp1;

        for(int i : nums1){
            temp1.push_back(i);
        }

        int i = 0 , j = 0;

        nums1.clear();

        while(i < m && j < n){

            if(temp1[i] <= nums2[j]){
                nums1.push_back(temp1[i++]);

            }
            else{
                nums1.push_back(nums2[j++]);
            }
        }

        while(i < m){
            nums1.push_back(temp1[i++]);
        }

        while(j < n){
            nums1.push_back(nums2[j++]);
        }
    }
};