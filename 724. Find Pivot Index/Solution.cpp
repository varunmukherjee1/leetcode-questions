#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> pre(n);
        vector<int> post(n);

        pre[0] = nums[0];
        post[n-1] = nums[n-1];

        for(int i = 1 ; i < n ; i++){
            pre[i] = nums[i] + pre[i-1];
        }

        for(int i = n-2 ; i >= 0 ; i--){
            post[i] = nums[i] + post[i+1];
        }

        int ans = -1;

        for(int i = 0 ; i < n ; i++){

            if((pre[i]-nums[i]) == (post[i]-nums[i])){
                ans = i;
                break;
            }
        }

        return ans;
    }
};