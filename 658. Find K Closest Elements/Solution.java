import java.util.ArrayList;

class Solution {
    public List<Integer> findClosestElements(int[] arr, int k, int x) {
        
        List<Integer> ans = new ArrayList();

        int len = arr.length;

        int l = 0 , r = len-k;

        while(l < r){

            int m = (l + r)/2;

            if( x - arr[m] > arr[m+k] - x){
                l = m + 1;
            }
            else{
                r = m;
            }
        }

        for(int i = l ; i < (l+k); i++){
            ans.add(arr[i]);
        }   
        
        return ans;
    }
}