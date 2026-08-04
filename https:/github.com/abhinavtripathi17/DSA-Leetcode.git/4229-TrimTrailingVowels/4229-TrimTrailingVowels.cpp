// Last updated: 8/4/2026, 12:33:13 PM
class Solution {
public:
    string trimTrailingVowels(string s) {
        string str = "";
        int j = s.length()-1;

        while(j >= 0 && (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u')){
            j--;
        }

        for(int i = 0 ; i <= j  ; i++){
            str += s[i];
        }

        return str;
    }
};