#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        if(nums.size() == 0)
            return 0;

        int ans = nums[0];
        int temp = 0;

        for(int i : nums){

            temp += i;
            ans = max(temp,ans);

            if(temp < 0){
                temp = 0;
            }
        }

        return ans;        
    }
};