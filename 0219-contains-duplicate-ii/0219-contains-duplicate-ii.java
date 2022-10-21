// import java.util.HashMap;

class Solution {
    public boolean containsNearbyDuplicate(int[] nums, int k) {
        
        int len = nums.length;
        HashMap<Integer,Integer> mp = new HashMap<>();

        for(int i = 0 ; i < len ; i++){

            if(mp.get(nums[i]) != null){
                int id = mp.get(nums[i]);

                if(Math.abs(i - id) <= k)
                    return true;
                else
                    mp.put(nums[i],i);
            }
            else{
               mp.put(nums[i],i);
            }

        }

        return false;
    }
}