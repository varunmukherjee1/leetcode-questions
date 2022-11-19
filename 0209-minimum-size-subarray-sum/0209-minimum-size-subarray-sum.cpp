class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int i = 0;
        int j = 0;
        int sum = 0;
        int ans = INT_MAX;
        int l = nums.size();

        while(j < l){
            sum += nums[j++];

            while(sum >= target){
                ans = min(ans,j-i);
                sum -= nums[i++];
            }
        }

        return (ans == INT_MAX)? 0:ans;
        
    }
};