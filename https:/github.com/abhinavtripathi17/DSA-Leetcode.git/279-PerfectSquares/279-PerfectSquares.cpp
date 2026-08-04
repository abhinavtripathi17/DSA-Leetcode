// Last updated: 8/4/2026, 7:17:38 PM
class Solution {
public:
int dp[10001];
    int numSquares(int n) {
        for(int i = 0 ; i < 10001 ; i++){
            dp[i] = -1;
        }
        return solve(n);
    }

    int solve(int n){
        if(n == 0){
            return 0;
        }

        if(dp[n] != -1){
            return dp[n];
        }

        int ans = INT_MAX;
        for(int i = 1 ; i*i <= n ; i++){
            ans = min(ans , 1+solve(n-i*i));
        }
        return dp[n] = ans;
    }
};