// Last updated: 8/4/2026, 7:23:49 PM
class Solution {
public:
    int dp[101][101];
    int uniquePaths(int m, int n) {
        memset(dp , -1 , sizeof(dp));
        return solve(m-1 , n-1);
    }
    int solve(int m , int n){
        if(m == 0 && n == 0) return 1;
        if(m < 0 || n < 0) return 0;
        if(dp[m][n] != -1) return dp[m][n];

        return dp[m][n] = solve(m-1 , n) + solve(m , n-1);
    }
};