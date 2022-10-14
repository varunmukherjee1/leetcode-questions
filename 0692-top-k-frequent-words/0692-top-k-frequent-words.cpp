class Solution {
public:

    static bool comparator(pair<string,int> p1 , pair<string,int> p2){
        if(p1.second != p2.second){
            return p1.second > p2.second;
        }

        return p1.first < p2.first;
    }

    vector<string> topKFrequent(vector<string>& words, int k) {

        unordered_map<string,int> mp;

        for(string s : words){
            mp[s]++;
        }

        vector<pair<string,int>> vec;

        for(auto i : mp){
            vec.push_back(i);
        }

        sort(vec.begin(),vec.end(),comparator);
        int len = vec.size();

        vector<string> ans;

        int i = 0;

        while(k--){
            ans.push_back(vec[i].first);
            i++;
        }

        return ans;
    }
};