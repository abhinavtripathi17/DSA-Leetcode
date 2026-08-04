// Last updated: 8/4/2026, 5:20:20 PM
1class Solution {
2public:
3    vector<int> countTasks(vector<int>& tasks, vector<int>& shifts) {
4        int n = tasks.size();
5
6        vector<long long> prefix(n);
7        prefix[0] = tasks[0];
8
9        for (int i = 1; i < n; i++)
10            prefix[i] = prefix[i - 1] + tasks[i];
11
12        vector<int> ans;
13
14        long long done = 0;
15
16        for (int shift : shifts) {
17            long long target = done + shift;
18
19            int pos = upper_bound(prefix.begin(), prefix.end(), target) - prefix.begin();
20
21            if (pos == n) {
22                ans.push_back(0);
23                done = 0;          // restart
24            } else {
25                done = target;
26                ans.push_back(n - pos);
27            }
28        }
29
30        return ans;
31    }
32};