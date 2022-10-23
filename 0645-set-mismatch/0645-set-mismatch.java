import java.util.HashMap;

class Solution {
    public int[] findErrorNums(int[] nums) {
        HashMap<Integer,Integer> mp = new HashMap<>();

        int len = nums.length;
        int[] ans = new int[2];

        for(int i = 0 ; i < len ; i++){
            if(mp.get(nums[i]) != null){
                int temp = mp.get(nums[i]);
                mp.put(nums[i],temp+1);
                ans[0] = nums[i];
            }
            else{
                mp.put(nums[i],1);
            }
        }

        for(int i = 1 ; i <= len ; i++){
            if(mp.get(i) == null){
                ans[1] = i;
            }
        }

        return ans;
    }
}