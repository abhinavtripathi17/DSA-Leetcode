// Last updated: 10/15/2026, 10:13:13 PM
1class Solution {
2public:
3    int sumCounts(vector<int>& nums) {
4        int n = nums.size(), ans = 0;
5        for (int i = 0; i < n; i++) {
6            bool seen[101] = {false};
7            int distinct = 0;
8            for (int j = i; j < n; j++) {
9                if (!seen[nums[j]]) {
10                    seen[nums[j]] = true;
11                    distinct++;
12                }
13                ans += distinct * distinct;
14            }
15        }
16        return ans;
17    }
18};