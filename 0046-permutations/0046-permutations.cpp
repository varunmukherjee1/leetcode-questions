class Solution {
public:
    void helper(vector<int> nums,unordered_set<int> st, vector<vector<int>>& ans, vector<int> temp){

        int len = nums.size();

        if(st.size() == len){
            ans.push_back(temp);
            return;
        }

        for(int i = 0 ; i < len ; i++){
            if(st.find(i) == st.end()){
                st.insert(i);
                temp.push_back(nums[i]);
                helper(nums,st,ans,temp);
                temp.pop_back();
                st.erase(st.find(i));
            }
        }
        
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        unordered_set<int> st;

        helper(nums,st,ans,temp);

        return ans;
    }
};