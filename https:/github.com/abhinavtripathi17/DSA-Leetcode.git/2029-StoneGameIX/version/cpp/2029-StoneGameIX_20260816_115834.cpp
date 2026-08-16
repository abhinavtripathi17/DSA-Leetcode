// Last updated: 8/16/2026, 11:58:34 AM
1class Solution {
2public:
3    bool stoneGameIX(vector<int>& stones) {
4        int cnt[3] = {0};
5        for (int x : stones)
6            cnt[x % 3]++;
7
8        if (cnt[0] % 2 == 0) {
9            return cnt[1] > 0 && cnt[2] > 0;
10        } else {
11            return abs(cnt[1] - cnt[2]) > 2;
12        }
13    }
14};