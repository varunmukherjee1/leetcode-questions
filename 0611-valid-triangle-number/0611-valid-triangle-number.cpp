class Solution {
public:
    int triangleNumber(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        
        int ans = 0;
        int n = nums.size();

        for(int i = n-1 ; i >= 2 ; i--){

            int l = 0;
            int h = i-1;

            while(l < h){
                if((nums[l] + nums[h]) > nums[i]){
                    ans += (h - l);
                    h--;
                }
                else{
                    l++;
                }
            }
        }

        return ans;
    }
};