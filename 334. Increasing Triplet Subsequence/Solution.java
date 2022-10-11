class Solution {

    public boolean increasingTriplet(int[] nums) {
        
        int len = nums.length;

        if(len < 3) return false;

        int[] pre = new int[len];
        int[] post = new int[len];

        pre[0] = nums[0];
        post[len-1] = nums[len-1];

        for(int i = 1 ; i < len ; i++){
            pre[i] = (nums[i] < pre[i-1])? nums[i]:pre[i-1];
        }

        for(int i = len-2 ; i >= 0 ; i--){
            post[i] = (nums[i] > post[i+1])? nums[i]:post[i+1];
        }

        for(int i = 1 ; i < len -1 ; i++){
            if(pre[i-1] < nums[i] && post[i+1] > nums[i]){
                return true;
            }
        }

        return false;
    }
}