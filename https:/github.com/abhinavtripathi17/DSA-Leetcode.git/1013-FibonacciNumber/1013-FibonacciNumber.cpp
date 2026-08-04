// Last updated: 8/4/2026, 7:10:39 PM
class Solution {
public:
    int fib(int n) {
        if(n == 0) return 0;
        if(n == 1) return 1;

        int ans = fib(n-1) + fib(n-2);
        return ans;
    }
};