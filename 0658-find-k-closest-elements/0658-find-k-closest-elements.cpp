class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        int len = arr.size();

        for(int i = 0 ; i < len ; i++){
            pq.push({abs(arr[i] - x),i});
        }

        vector<int> ans;

        for(int i = 0 ; i < k ; i++){
            ans.push_back(arr[pq.top().second]);
            pq.pop();
        }

        sort(ans.begin(),ans.end());

        return ans;
    }
};