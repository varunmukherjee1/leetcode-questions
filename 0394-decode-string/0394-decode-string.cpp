class Solution {
public:
    string decodeString(string s) {
        
        int len = s.length();

        if(len == 0)    return "";

        string ans = "";

        stack<int> counts;
        stack<string> strs;

        int i = 0;

        while(i < len){

            char c = s[i];

            if(c >= '0' && c <= '9'){

                int count = 0;

                while(s[i] >= '0' && s[i] <= '9'){
                    count = count*10 + (s[i] - '0');
                    i++;
                }

                counts.push(count);
            }
            else if(c == '['){
                strs.push(ans);
                ans = "";
                i++;
            }
            else if(c == ']'){

                string temp = strs.top();
                strs.pop();

                int count = counts.top();
                counts.pop();

                while(count--){
                    temp += ans;
                }

                ans = temp;
                i++;
            }
            else {
                ans += c;
                i++;
            }
        }

        return ans;
    }
};