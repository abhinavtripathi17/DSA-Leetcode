// Last updated: 8/4/2026, 7:23:39 PM
class Solution {
public:
    int dp[46];
    int climbStairs(int n) {
        for(int i = 0 ; i < 46 ; i++){
            dp[i] = -1;
        }
        return solve(n , 0);
    }
    int solve(int n , int steps){
        if(steps == n){
            return 1;
        }
        if(steps > n){
            return 0;
        }
        if(dp[steps] != -1) return dp[steps];
        int t1 = solve(n , steps+1);
        int t2 = solve(n , steps+2);

        return dp[steps] = t1+t2;
    }
};