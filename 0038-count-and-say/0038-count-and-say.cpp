class Solution {
public:
    string countAndSay(int n) {
        if(n == 1){
            return "1";
        }

        string s = countAndSay(n-1);

        string res = "";

        pair<char , int> pr = {s[0] , 0};

        for(auto c : s){

            if(c == pr.first){
                pr.second++;
            }
            else{
                res += to_string(pr.second) + pr.first;
                pr.first = c;
                pr.second = 1;
            }

        }

        res += to_string(pr.second) + pr.first;

        return res;
    }
};