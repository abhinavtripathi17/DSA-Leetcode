// Last updated: 9/21/2026, 11:05:44 PM
1class Solution {
2public:
3    vector<long long> resultArray(vector<int>& nums, int k) {
4        int n = nums.size();
5         vector<long long> result(k, 0);
6        vector<long long> prevCount(k, 0);
7
8        for (int i = 0; i < n; i++) {
9
10            // currCount[r] = number of subarrays
11            // ending at index i having product % k == r
12            vector<long long> currCount(k, 0);
13
14            // Start a new subarray with nums[i]
15            int currElementRemainder = nums[i] % k;
16            currCount[currElementRemainder]++;
17
18            // Extend all subarrays ending at i-1
19            for (int oldRem = 0; oldRem < k; oldRem++) {
20
21                int newRemain =
22                    (1LL * oldRem * (nums[i] % k)) % k;
23
24                currCount[newRemain] += prevCount[oldRem];
25            }
26
27            // Current becomes previous for next iteration
28            prevCount = move(currCount);
29
30            // Add all subarrays ending at i
31            // to the final answer
32            for (int x = 0; x < k; x++) {
33                result[x] += prevCount[x];
34            }
35        }
36
37        return result;
38    }
39};