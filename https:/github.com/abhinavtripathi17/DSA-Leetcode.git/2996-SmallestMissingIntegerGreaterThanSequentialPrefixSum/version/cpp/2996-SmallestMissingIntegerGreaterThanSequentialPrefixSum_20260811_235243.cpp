// Last updated: 8/11/2026, 11:52:43 PM
1class Solution {
2public:
3    int missingInteger(std::vector<int>& nums) {
4        int n = nums.size();
5        std::unordered_set<int> num_set(nums.begin(), nums.end());
6        int prefix_len = 1;
7
8        for (int i = 1; i < n; i++) {
9            if (nums[i] == nums[i - 1] + 1) {
10                prefix_len += 1;
11            } else {
12                break;
13            }
14        }
15
16        int total = (nums[prefix_len - 1] + nums[0]) * prefix_len / 2;
17        while (num_set.count(total)) {
18            total += 1;
19        }
20
21        return total;
22    }
23};