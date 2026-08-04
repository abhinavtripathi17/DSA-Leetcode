// Last updated: 8/4/2026, 12:35:39 PM
class Solution {
public:
    int countPathsWithXorValue(vector<vector<int>>& grid, int k) {
         int mod = 1e9 + 7;
        int m = grid.size();
        int n = grid[0].size();

        vector<vector<unordered_map<int, int>>> dp(m, vector<unordered_map<int, int>>(n));

        dp[0][0][grid[0][0]]= 1;

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                for (auto& [xor_value, count] : dp[i][j]) {
                    if (j + 1 < n) {
                        int new_xor = xor_value ^ grid[i][j + 1];
                        dp[i][j + 1][new_xor] = (dp[i][j + 1][new_xor] + count) % mod;
                    }
                    
                    if (i + 1 < m) {
                        int new_xor = xor_value ^ grid[i + 1][j];
                        dp[i + 1][j][new_xor] = (dp[i + 1][j][new_xor] + count) % mod;
                    }
                }
            }
        }
        return dp[m - 1][n - 1][k];
    }
};