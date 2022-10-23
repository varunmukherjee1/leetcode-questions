class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int len = numbers.size();

        int i = 0 , j = len - 1;

        while(i < j){

            int sum = numbers[i] + numbers[j];

            if(sum == target){
                vector<int> vec;
                vec.push_back(i+1);
                vec.push_back(j+1);

                return vec;
            }
            else if(sum < target){
                i++;
            }
            else{
                j--;
            }
                
        }

        vector<int> ans;
        return ans;
    }
};