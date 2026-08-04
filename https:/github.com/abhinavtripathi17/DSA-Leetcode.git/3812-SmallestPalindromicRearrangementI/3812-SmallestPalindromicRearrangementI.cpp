// Last updated: 8/4/2026, 12:34:44 PM
class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.length();
        if(n==1 || n==2 || n==3) return s; 

        string str = "";
        for(int i = 0 ; i < n/2 ; i++){
            str += s[i];
        }
        sort(str.begin(), str.end());
        
        string ss(str.rbegin() , str.rend());
        if(n%2 == 1){
            str += s[n/2];
        }
       
        str += ss;

        return str;

    }
};