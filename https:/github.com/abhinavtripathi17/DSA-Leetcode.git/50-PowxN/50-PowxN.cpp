// Last updated: 8/4/2026, 7:24:22 PM
class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1;
        int m = abs(n);
        while(m > 0){
            if(m % 2 == 1){
                ans = ans * x;
                m = m - 1;
            }
            else{
                x = x * x;
                m = m / 2;    
            }
        }
        if(n < 0) ans = 1 / ans;
        return ans;
    }
};