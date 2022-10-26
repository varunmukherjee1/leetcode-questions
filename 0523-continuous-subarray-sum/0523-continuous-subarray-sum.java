import java.util.HashSet;

class Solution {
    public boolean checkSubarraySum(int[] nums, int k) {
        
        HashSet<Integer> hs = new HashSet<>();
        // hs.add(0);
        int prev = 0;
        int sum = 0;

        for(int i : nums){
            sum += i;
            sum %= k;

            if(hs.contains(sum)){
                return true;
            }

            hs.add(prev);
            prev = sum;
        }

        return false;
    }
}