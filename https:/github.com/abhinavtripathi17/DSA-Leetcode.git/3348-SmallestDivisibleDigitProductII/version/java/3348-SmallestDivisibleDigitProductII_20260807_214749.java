// Last updated: 8/7/2026, 9:47:49 PM
1class Solution {
2    public String smallestNumber(String num, long t) {
3        int req2 = 0, req3 = 0, req5 = 0, req7 = 0;
4        long temp = t;
5        while (temp % 2 == 0) { temp /= 2; req2++; }
6        while (temp % 3 == 0) { temp /= 3; req3++; }
7        while (temp % 5 == 0) { temp /= 5; req5++; }
8        while (temp % 7 == 0) { temp /= 7; req7++; }
9        if (temp > 1) return "-1";
10
11        int[][] dp = new int[60][40];
12        for (int i = 0; i < 60; ++i) {
13            for (int j = 0; j < 40; ++j) {
14                dp[i][j] = 1000000000;
15            }
16        }
17        dp[0][0] = 0;
18        
19        int[][] trans = {{1, 0}, {0, 1}, {2, 0}, {1, 1}, {3, 0}, {0, 2}};
20        for (int i = 0; i < 60; ++i) {
21            for (int j = 0; j < 40; ++j) {
22                if (dp[i][j] == 1000000000) continue;
23                for (int[] tr : trans) {
24                    int ni = Math.min(59, i + tr[0]);
25                    int nj = Math.min(39, j + tr[1]);
26                    dp[ni][nj] = Math.min(dp[ni][nj], dp[i][j] + 1);
27                }
28            }
29        }
30        
31        for (int i = 59; i >= 0; --i) {
32            for (int j = 39; j >= 0; --j) {
33                if (i < 59) dp[i][j] = Math.min(dp[i][j], dp[i + 1][j]);
34                if (j < 39) dp[i][j] = Math.min(dp[i][j], dp[i][j + 1]);
35            }
36        }
37
38        int[] F2 = {0, 0, 1, 0, 2, 0, 1, 0, 3, 0};
39        int[] F3 = {0, 0, 0, 1, 0, 0, 1, 0, 0, 2};
40        int[] F5 = {0, 0, 0, 0, 0, 1, 0, 0, 0, 0};
41        int[] F7 = {0, 0, 0, 0, 0, 0, 0, 1, 0, 0};
42
43        int n = num.length();
44        boolean hasZero = false;
45        int firstZero = n;
46        for (int i = 0; i < n; ++i) {
47            if (num.charAt(i) == '0') {
48                hasZero = true;
49                firstZero = i;
50                break;
51            }
52        }
53
54        if (!hasZero) {
55            int r2 = req2, r3 = req3, r5 = req5, r7 = req7;
56            for (int i = 0; i < n; i++) {
57                int d = num.charAt(i) - '0';
58                r2 = Math.max(0, r2 - F2[d]);
59                r3 = Math.max(0, r3 - F3[d]);
60                r5 = Math.max(0, r5 - F5[d]);
61                r7 = Math.max(0, r7 - F7[d]);
62            }
63            if (r2 == 0 && r3 == 0 && r5 == 0 && r7 == 0) return num;
64        }
65
66        int limit = Math.min(n - 1, firstZero);
67        int p2 = 0, p3 = 0, p5 = 0, p7 = 0;
68        for (int i = 0; i < limit; ++i) {
69            int d = num.charAt(i) - '0';
70            p2 += F2[d];
71            p3 += F3[d];
72            p5 += F5[d];
73            p7 += F7[d];
74        }
75
76        for (int i = limit; i >= 0; --i) {
77            int startD = (num.charAt(i) - '0') + 1;
78            for (int d = startD; d <= 9; ++d) {
79                int n2 = Math.max(0, req2 - p2 - F2[d]);
80                int n3 = Math.max(0, req3 - p3 - F3[d]);
81                int n5 = Math.max(0, req5 - p5 - F5[d]);
82                int n7 = Math.max(0, req7 - p7 - F7[d]);
83                int L = n - 1 - i;
84                
85                if (n7 + n5 + dp[n2][n3] <= L) {
86                    StringBuilder ans = new StringBuilder(num.substring(0, i));
87                    ans.append(d);
88                    int rem2 = n2, rem3 = n3, rem5 = n5, rem7 = n7;
89                    for (int pos = 0; pos < L; ++pos) {
90                        for (int x = 1; x <= 9; ++x) {
91                            int nn2 = Math.max(0, rem2 - F2[x]);
92                            int nn3 = Math.max(0, rem3 - F3[x]);
93                            int nn5 = Math.max(0, rem5 - F5[x]);
94                            int nn7 = Math.max(0, rem7 - F7[x]);
95                            if (nn7 + nn5 + dp[nn2][nn3] <= L - 1 - pos) {
96                                ans.append(x);
97                                rem2 = nn2; rem3 = nn3; rem5 = nn5; rem7 = nn7;
98                                break;
99                            }
100                        }
101                    }
102                    return ans.toString();
103                }
104            }
105            if (i > 0) {
106                int d = num.charAt(i - 1) - '0';
107                p2 -= F2[d];
108                p3 -= F3[d];
109                p5 -= F5[d];
110                p7 -= F7[d];
111            }
112        }
113
114        int minLenNeeded = req7 + req5 + dp[req2][req3];
115        int M = Math.max(n + 1, minLenNeeded);
116        StringBuilder ans = new StringBuilder();
117        int rem2 = req2, rem3 = req3, rem5 = req5, rem7 = req7;
118        
119        for (int pos = 0; pos < M; ++pos) {
120            for (int x = 1; x <= 9; ++x) {
121                int nn2 = Math.max(0, rem2 - F2[x]);
122                int nn3 = Math.max(0, rem3 - F3[x]);
123                int nn5 = Math.max(0, rem5 - F5[x]);
124                int nn7 = Math.max(0, rem7 - F7[x]);
125                if (nn7 + nn5 + dp[nn2][nn3] <= M - 1 - pos) {
126                    ans.append(x);
127                    rem2 = nn2; rem3 = nn3; rem5 = nn5; rem7 = nn7;
128                    break;
129                }
130            }
131        }
132        return ans.toString();
133    }
134}