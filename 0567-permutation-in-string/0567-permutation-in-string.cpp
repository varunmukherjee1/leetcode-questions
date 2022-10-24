class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        int ls1 = s1.length();
        int ls2 = s2.length();

        if(ls2 < ls1){
            return false;
        }

        vector<int> vs1(26,0);
        vector<int> vs2(26,0);

        for(char c : s1){
            vs1[c - 'a']++;
        }

        int i = 0;
        int j = 0;

        while(j < ls2){

            vs2[s2[j] - 'a']++;

            if((j-i+1) == ls1){

                bool match = true;

                for(int k = 0 ; k < 26 ; k++){
                    if(vs1[k] != vs2[k])    match = false;
                }

                if(match)   return true;

            }
            
            if((j-i+1) < ls1){
                j++;
            }
            else{
                vs2[s2[i] - 'a']--;
                i++;
                j++;
            }
        }

        return false;
    }
};