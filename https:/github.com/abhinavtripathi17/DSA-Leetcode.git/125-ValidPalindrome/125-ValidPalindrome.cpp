// Last updated: 8/4/2026, 7:21:37 PM
class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0;
        int end = s.length()-1;

        while(end>=start){
            if(!isalnum(s[start])) { start++; continue;} 
            if(!isalnum(s[end])) { end--; continue;}  

            if(tolower(s[start])!=tolower(s[end])) return false;

            start++;
            end--;

          }
          return true;
    }
};