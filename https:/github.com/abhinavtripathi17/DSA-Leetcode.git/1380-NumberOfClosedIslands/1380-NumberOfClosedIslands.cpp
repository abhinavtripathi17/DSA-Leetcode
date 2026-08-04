// Last updated: 8/4/2026, 12:45:10 PM
class Solution {
public:
    int n, m;

    bool dfs(vector<vector<int>>& grid, int r, int c) {
        if (r < 0 || c < 0 || r >= n || c >= m) {
            return false;
        }

        if (grid[r][c] == 1) {
            return true;
        }

        grid[r][c] = 1;

        bool top = dfs(grid, r - 1, c);
        bool right = dfs(grid, r, c + 1);
        bool down = dfs(grid, r + 1, c);
        bool left = dfs(grid, r, c - 1);

        return top && right && down && left;
    }

    int closedIsland(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();
        int cnt = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 0) {
                    if (dfs(grid, i, j) == true) {
                        cnt++;
                    }
                }
            }
        }

        return cnt;
    }
};