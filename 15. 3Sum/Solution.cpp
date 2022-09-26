#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>> ans;
        int n = nums.size();

        sort(nums.begin(),nums.end());

        for(int i = 0 ; i < n-2 ; i++){

            if(i == 0 || (i > 0 && nums[i] != nums[i-1])){

                int b = i + 1;
                int c = n-1;
                int sum = 0 -  nums[i];

                while(b < c){

                    if((nums[b] + nums[c]) == sum){
                        vector<int> temp;

                        temp.push_back(nums[i]);
                        temp.push_back(nums[b]);
                        temp.push_back(nums[c]);

                        ans.push_back(temp);

                        while(b < c && nums[b] == nums[b+1]) b++;
                        while(b < c && nums[c] == nums[c-1]) c--;

                        b++;
                        c--;
                    }
                    else if( (nums[b] + nums[c]) < sum){
                        b++;
                    }
                    else{
                        c--;
                    }
                }
            }
        }

        return ans;
    }
};