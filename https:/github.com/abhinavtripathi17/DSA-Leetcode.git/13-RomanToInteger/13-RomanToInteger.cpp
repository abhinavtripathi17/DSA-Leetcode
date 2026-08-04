// Last updated: 8/4/2026, 7:26:19 PM
class Solution {
public:
    int romanToInt(string s) {
        int n = s.length();
        int i = 0;
        int ans = 0;
        while(i < n){
            if(i+1 < n && helper(s[i+1]) > helper(s[i])){
                ans -= helper(s[i]);
            }
            else ans += helper(s[i]);
            i++;
        }

        return ans;
    }

    int helper(char c){
        if(c == 'I') return 1;
        else if(c == 'V') return 5;
        else if(c == 'X') return 10;
        else if(c == 'L') return 50;
        else if(c == 'C') return 100;
        else if(c == 'D') return 500;
        else return 1000;

    }
};