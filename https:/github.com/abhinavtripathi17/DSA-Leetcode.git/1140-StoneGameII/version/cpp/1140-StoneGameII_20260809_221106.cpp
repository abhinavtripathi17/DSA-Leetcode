// Last updated: 8/9/2026, 10:11:06 PM
1class Solution {
2public:
3    int stoneGameII(vector<int>& piles) {
4        int n = piles.size();
5
6        // suffix[i] = sum of piles from i to n-1
7        vector<int> suffix(n + 1, 0);
8
9        for (int i = n - 1; i >= 0; i--) {
10            suffix[i] = piles[i] + suffix[i + 1];
11        }
12
13        vector<vector<int>> dp(n, vector<int>(n + 1, -1));
14
15        return solve(piles, suffix, 0, 1, dp);
16    }
17
18    int solve(vector<int>& piles,
19              vector<int>& suffix,
20              int i,
21              int M,
22              vector<vector<int>>& dp) {
23
24        int n = piles.size();
25
26        // Can take all remaining piles
27        if (i + 2 * M >= n) {
28            return suffix[i];
29        }
30
31        // Already calculated
32        if (dp[i][M] != -1) {
33            return dp[i][M];
34        }
35
36        int maxi = 0;
37
38        for (int X = 1; X <= 2 * M; X++) {
39
40            // Opponent's best answer
41            int opponent = solve(
42                piles,
43                suffix,
44                i + X,
45                max(M, X),
46                dp
47            );
48
49    
50            int current = suffix[i] - opponent;
51
52            maxi = max(maxi, current);
53        }
54
55        return dp[i][M] = maxi;
56    }
57};