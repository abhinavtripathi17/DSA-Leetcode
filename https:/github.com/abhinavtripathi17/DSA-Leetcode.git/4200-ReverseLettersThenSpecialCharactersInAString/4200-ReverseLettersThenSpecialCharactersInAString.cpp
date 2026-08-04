// Last updated: 8/4/2026, 12:33:23 PM
class Solution {
public:
    string reverseByType(string s) {
       int n = s.size();

       string new_s = "" , special = "";

        for(int i = 0 ; i < n ; i++){
            if(s[i] >= 'a' && s[i] <= 'z'){
                new_s += s[i];
            }
            else{
                special += s[i];
            }
        }

        reverse(new_s.begin() , new_s.end());
        reverse(special.begin() , special.end());

        string final = "";
        int l = 0 , r = 0;

        for(int i = 0 ; i < n ; i++){
            if(s[i] >= 'a' && s[i]  <= 'z'){
                final += new_s[l];
                l++;
            }
            else{
                final += special[r];
                r++;
            }
        }
        return final;
    }
};