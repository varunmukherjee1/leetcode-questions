class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        
        string bin = "";
        int t = 32;

        while(t--){
            int r = n%2;
            bin += to_string(r);
            n /= 2;
        }

        // cout<<bin<<endl;
        // cout<<bin.length()<<endl;

        uint32_t ans = 0;

        uint32_t k = pow(2,31);

        for(char c : bin){
            if(c == '1'){
                ans += k;
            }

            k /= 2;
        }

        return ans;
    }
};