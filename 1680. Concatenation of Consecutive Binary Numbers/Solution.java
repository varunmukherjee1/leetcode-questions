class Solution {

    public int concatenatedBinary(int n) {
        
        int size = 0;
        long res = 0;
        long mod = (long)(1e9 + 7);

        for(int i = 1; i <= n ; i++){
            if((i & (i-1)) == 0) size++;

            res = ((res << size) | i)%mod;
        }

        return (int)res;   
    }
}