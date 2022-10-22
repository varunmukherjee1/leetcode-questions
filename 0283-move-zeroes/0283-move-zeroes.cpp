class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int len = nums.size();
        int i = -1;
        int j = 0;

        while(j < len){
            if(nums[j] != 0){
                i++;
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }

            j++;
        }
    }
};