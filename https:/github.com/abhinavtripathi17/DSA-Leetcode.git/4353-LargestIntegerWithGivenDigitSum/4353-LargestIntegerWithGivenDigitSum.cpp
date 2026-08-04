// Last updated: 8/4/2026, 12:32:49 PM
class Solution {
public:
    int largestInteger(int n, int s) {
        if(s > 9*n){
            return -1;
        }

        if(s == 0) return 0;

        int ans = 0;

        while(s > 0){
            int digit = min(s , 9);

            ans = ans*10 + digit;
            s = s - digit;
            n--;
        }

        while(n > 0){
            ans = ans*10;
            n--;
        }
        
        return ans;
    }
};