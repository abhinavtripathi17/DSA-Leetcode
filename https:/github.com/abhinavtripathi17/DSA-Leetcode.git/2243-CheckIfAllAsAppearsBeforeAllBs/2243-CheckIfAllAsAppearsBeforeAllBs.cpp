// Last updated: 8/4/2026, 12:40:09 PM
class Solution {
public:
    bool checkString(string s) {
        bool istrue = false;

        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == 'a' && istrue){
                return false;
            }
            if(s[i] == 'b'){
                istrue = true;
            }
        }
        return true;
    }
};