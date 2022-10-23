class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int ans = 0;
        int len = s.length();
        
        int i = 0;
        int j = 0;

        unordered_map<char,int> mp;

        while(j < len){

            mp[s[j]]++;

            if(mp.size() == j - i +1){
                ans = (mp.size() > ans)? mp.size():ans;
            }
            else if(mp.size() < j-i+1){

                while(mp.size() < j-i+1){
                    mp[s[i]]--;

                    if(mp[s[i]] == 0){
                        mp.erase(s[i]);
                    }
                    i++;
                }
            }

            j++;
        }

        return ans;
    }
};