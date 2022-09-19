#include<bits/stdc++.h>
using namespace std;

class Solution {

public:
    static bool comp(pair<int,int> p1 , pair<int,int> p2){
        return (p1.second < p2.second);
    }

    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<pair<int,int>> vec;

        int n = nums.size();

        for(int i = 0 ; i < n ; i++){
            vec.push_back({nums[i],i});
        }

        sort(vec.begin(),vec.end());

        int i = 0;
        int j = n-1;
        int id1 = -1;
        int id2 = -2;

        while(i < j){

            int sum = vec[i].first + vec[j].first;

            if(sum > target){
                j--;
            }
            else if(sum < target){
                i++;
            }
            else {
                id1 = vec[i].second;
                id2 = vec[j].second;
                break;
            }
        }

        return {id1,id2};
        
    }
};