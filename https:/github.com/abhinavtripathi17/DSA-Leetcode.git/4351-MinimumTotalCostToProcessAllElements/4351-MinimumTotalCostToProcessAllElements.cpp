// Last updated: 8/4/2026, 12:32:51 PM
class Solution {
public:
    const int MOD = 1e9+7;
    int minimumCost(vector<int>& nums, int k) {
        int n = nums.size();
        long long cost = 0;
        long long ops = 0;
        long long left = k;

        for (int i = 0; i < n; i++) {
            
            if(nums[i] > left) {
                long long need = nums[i] - left;
                long long cnt = (need + k - 1)/k;

                 long long a = cnt;
                long long b = 2 * ops + cnt + 1;

                if (a % 2 == 0)
                    a /= 2;
                else
                    b /= 2;

                cost = (cost + (a % MOD) * (b % MOD)) % MOD;

                ops += cnt;
                left += cnt * 1LL * k;
            }
            
            if (nums[i] <= left) {
                left -= nums[i];
            }
        }
        return cost % MOD;
    }

};