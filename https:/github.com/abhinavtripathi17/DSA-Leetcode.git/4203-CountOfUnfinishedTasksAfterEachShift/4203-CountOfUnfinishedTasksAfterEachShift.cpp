// Last updated: 8/4/2026, 7:04:35 PM
class Solution {
public:
    vector<int> countTasks(vector<int>& tasks, vector<int>& shifts) {
        int n = tasks.size();

        vector<long long> prefix(n);
        prefix[0] = tasks[0];

        for (int i = 1; i < n; i++)
            prefix[i] = prefix[i - 1] + tasks[i];

        vector<int> ans;

        long long done = 0;

        for (int shift : shifts) {
            long long target = done + shift;

            int pos = upper_bound(prefix.begin(), prefix.end(), target) - prefix.begin();

            if (pos == n) {
                ans.push_back(0);
                done = 0;          // restart
            } else {
                done = target;
                ans.push_back(n - pos);
            }
        }

        return ans;
    }
};