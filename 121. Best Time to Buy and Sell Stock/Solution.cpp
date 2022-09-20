#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int maxProfit(vector<int>& prices) {

            int len = prices.size();
            vector<int> postMax(len);

            postMax[len-1] = prices[len-1];

            for(int i = len-2 ; i >= 0 ; i--){
                postMax[i] = max(prices[i],postMax[i+1]);
            }

            int ans = 0;

            for(int i = 0 ; i < len ; i++){
                if(postMax[i] >= prices[i]){
                    ans = max(ans, postMax[i] - prices[i]);
                }
            }

            return ans;
        }
};