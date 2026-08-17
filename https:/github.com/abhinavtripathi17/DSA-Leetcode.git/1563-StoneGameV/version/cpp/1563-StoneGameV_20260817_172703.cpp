// Last updated: 8/17/2026, 5:27:03 PM
1class Solution {
2public:
3    int game(vector<vector<int>>& dp, vector<int>& a,
4             int i, int j, int total) {
5
6        if (i >= j)
7            return 0;
8
9        if (dp[i][j] != -1)
10            return dp[i][j];
11
12        int ans = 0;
13        int sumTillK = 0;
14
15        for (int k = i; k < j; k++) {
16
17            sumTillK += a[k];
18
19            int sumAfterK = total - sumTillK;
20
21            if (sumTillK > sumAfterK) {
22
23                ans = max(ans,
24                    sumAfterK +
25                    game(dp, a, k + 1, j, sumAfterK));
26
27            } else if (sumTillK < sumAfterK) {
28
29                ans = max(ans,
30                    sumTillK +
31                    game(dp, a, i, k, sumTillK));
32
33            } else {
34
35                ans = max(ans,
36                    sumTillK +
37                    max(
38                        game(dp, a, k + 1, j, sumAfterK),
39                        game(dp, a, i, k, sumTillK)
40                    ));
41            }
42        }
43
44        return dp[i][j] = ans;
45    }
46
47    int stoneGameV(vector<int>& stoneValue) {
48
49        int n = stoneValue.size();
50
51        vector<vector<int>> dp(n, vector<int>(n, -1));
52
53        int totalSum = accumulate(
54            stoneValue.begin(),
55            stoneValue.end(),
56            0
57        );
58
59        return game(dp, stoneValue, 0, n - 1, totalSum);
60    }
61};