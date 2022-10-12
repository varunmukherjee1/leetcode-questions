class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        vector<char> vs;
        vector<char> vt;

        for(char c : s){
            if( c == '#'){
                if(vs.size() != 0){
                    vs.pop_back();
                }
            }
            else{
                vs.push_back(c);
            }
        }

        for(char c : t){
            if( c == '#'){
                if(vt.size() != 0){
                    vt.pop_back();
                }
            }
            else{
                vt.push_back(c);
            }
        }

        return (vs == vt);        
    }
};