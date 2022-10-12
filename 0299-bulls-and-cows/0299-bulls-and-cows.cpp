class Solution {
public:
    string getHint(string secret, string guess) {
        
        int bulls = 0;
        int cows = 0;
        int ls = secret.length();

        unordered_map<char,int> mp;

        for(int i = 0 ; i < ls ; i++){

            if(secret[i] == guess[i]){
                bulls++;
                guess[i] = '#';
            }
            else{
                mp[secret[i]]++;
            }
        }

        for(char c : guess){
            if(c != '#' && mp.find(c) != mp.end() && mp[c] > 0){
                cows++;
            }

            mp[c]--;
        }

        string ans = to_string(bulls) + "A" + to_string(cows) + "B";

        return ans;
    }
};