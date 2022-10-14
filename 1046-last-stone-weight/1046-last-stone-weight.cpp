class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;

        for(int i : stones){
            pq.push(i);
        }

        while(pq.size() > 1){
            int n1 = pq.top();
            pq.pop();

            int n2 = pq.top();
            pq.pop();

            pq.push(n1-n2);
        }

        if(pq.size() == 0)  return 0;
        
        return pq.top();
    }
};