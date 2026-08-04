// Last updated: 8/4/2026, 12:34:11 PM
class Solution {
public:
    string processStr(string s) {
        int n = s.length();

        string str = "";

        for(int i = 0 ; i < n ; i++){
            if(s[i] == '*'){
                if(!str.empty())
                    str.pop_back();
            }
            else if(s[i] == '#'){
                str += str;
            }
            else if(s[i] == '%'){
                reverse(str.begin() , str.end());
            }
            else{
                str += s[i];
            }
        }
        return str;
    }
};