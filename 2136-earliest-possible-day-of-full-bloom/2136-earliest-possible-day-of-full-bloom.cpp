class Solution {
public:
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        
        int n = plantTime.size();
        int m = growTime.size();

        vector<pair<int,int>> vec(n);

        for(int i = 0 ; i < n ; i++){
            vec[i] = {growTime[i],plantTime[i]};
        }

        sort(vec.begin(),vec.end(), greater<pair<int,int>>());

        int day = 0;
        int ans = 0;

        for(int i = 0 ; i < n ; i++){
            day += vec[i].second;

            ans = max(ans , day + vec[i].first);
        }

        return ans;
    }
};