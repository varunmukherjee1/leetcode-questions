class Solution {
public:
    void helper(vector<int> temp , vector<int> nums ,unordered_set<int> us, vector<vector<int>>& ans){

        int tlen = temp.size();
        int n = nums.size();

        if(tlen == n){
            ans.push_back(temp);
            return;
        }

        for(int i = 0 ; i < n ; i++){
            int t = nums[i];

            if(us.find(t) == us.end()){
                temp.push_back(t);
                us.insert(t);

                helper(temp,nums,us,ans);

                temp.pop_back();
                us.erase(us.find(t));
            }
        }
        
    }

    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>> ans;
        vector<int> temp;
        unordered_set<int> us;

        helper(temp,nums,us,ans);        

        return ans;
    }
};