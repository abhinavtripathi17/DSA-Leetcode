// Last updated: 8/4/2026, 7:23:44 PM
class Solution {
public:
    int dp[201][201];
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        memset(dp , -1 , sizeof(dp));

        return solve(grid , m-1 , n-1);
    }
    int solve(vector<vector<int>>& grid , int m , int n){
        if(m < 0 || n < 0) return 1000000000;
        if(m == 0 && n == 0){
            return grid[0][0];
        }
        if(dp[n][m] != -1) return dp[n][m];

        int up =  grid[n][m] + solve(grid , m , n-1);//up
        int left =  grid[n][m] + solve(grid , m-1 , n);//left

        return dp[n][m] = min(up , left);
    }
};