// Last updated: 8/4/2026, 12:44:57 PM
class Solution {
public:
    int m, n;
    vector<vector<int>> dp;
    int countSquares(vector<vector<int>>& matrix) {
        m = matrix.size();
        n = matrix[0].size();
        dp.assign(m, vector<int>(n, -1));

        int total = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                total += helper(matrix, i, j);
            }
        }
        return total;
    }
     int helper(vector<vector<int>>& matrix, int i, int j) {
        if (i < 0 || j < 0) return 0;

        if (dp[i][j] != -1) return dp[i][j];

        if (matrix[i][j] == 0) return dp[i][j] = 0;

        if (i == 0 || j == 0) return dp[i][j] = 1;

        int up   = helper(matrix, i-1, j);
        int left = helper(matrix, i, j-1);
        int diag = helper(matrix, i-1, j-1);

        return dp[i][j] = 1 + min({up, left, diag});
    }

};