class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int len = nums.size();

        int i = 0;
        int j = len-1;

        int mid;

        while(i <= j){

            mid = (i+j)/2;

            if(nums[mid] == target)
                return mid;
            else if(nums[mid] > target)
                j--;
            else
                i++;
        }

        return i;
    }
};