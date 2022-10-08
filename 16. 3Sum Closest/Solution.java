class Solution {
    public int threeSumClosest(int[] nums, int target) {
        
        Arrays.sort(nums);

        int ans = Integer.MAX_VALUE;

        int n = nums.length;

        boolean found = false;

        for(int i = 0 ; i < n - 2; i++){
            int lo = i+1;
            int hi = n-1;


            while(lo < hi){

                int sum = nums[i] + nums[lo] + nums[hi];

                ans = (Math.abs(target - ans) < Math.abs(target-sum))? ans: sum;

                if(sum > target){
                    hi--;
                }
                else if(sum < target){
                    lo++;
                }
                else{
                    return sum;
                }
            }
        }

        return ans;
    }
}