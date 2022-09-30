class Solution {
    public int[] runningSum(int[] nums) {
        
        int len = nums.length;

        int[] sums = new int[len];

        if(len == 0){
            return sums;
        }

        sums[0] = nums[0];

        for(int i = 1 ; i < len ;i++){
            sums[i] = nums[i] + sums[i-1];
        }

        return sums;
    }
}