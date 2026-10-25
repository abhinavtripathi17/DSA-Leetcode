// Last updated: 10/25/2026, 2:58:30 PM
1class Solution {
2public:
3    int n, m;
4
5    bool dfs(vector<vector<int>>& grid, int r, int c) {
6        if (r < 0 || c < 0 || r >= n || c >= m) {
7            return false;
8        }
9
10        if (grid[r][c] == 1) {
11            return true;
12        }
13
14        grid[r][c] = 1;
15
16        bool top = dfs(grid, r - 1, c);
17        bool right = dfs(grid, r, c + 1);
18        bool down = dfs(grid, r + 1, c);
19        bool left = dfs(grid, r, c - 1);
20
21        return top && right && down && left;
22    }
23
24    int closedIsland(vector<vector<int>>& grid) {
25        n = grid.size();
26        m = grid[0].size();
27        int cnt = 0;
28
29        for (int i = 0; i < n; i++) {
30            for (int j = 0; j < m; j++) {
31                if (grid[i][j] == 0) {
32                    if (dfs(grid, i, j) == true) {
33                        cnt++;
34                    }
35                }
36            }
37        }
38
39        return cnt;
40    }
41};