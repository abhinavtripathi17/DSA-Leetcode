// Last updated: 11/22/2026, 12:43:06 PM
1class Solution {
2public:
3    bool checkString(string s) {
4        int n = s.length();
5        bool isB = false;
6
7        for(int i = 0 ; i < n ; i++){
8            if(isB && s[i] == 'a'){
9                return false;
10            }
11            if(s[i] == 'b'){
12                isB = true;
13            }
14        }
15        return true;
16    }
17};