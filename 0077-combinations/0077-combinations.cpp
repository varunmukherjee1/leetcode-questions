class Solution {
public:

    vector<vector<int>> combine(int n, int k) {
        
        vector<vector<int>> ans;

        vector<int> vec(k,0);
        int i = 0;

        while(i >= 0){
            
            vec[i]++;

            if(vec[i] > n){
                --i;
            }
            else if(i == k-1){
                ans.push_back(vec);
            }
            else{
                i++;
                vec[i] = vec[i-1];
            }
        }

        return ans;
    }
};