// Last updated: 8/4/2026, 7:04:13 PM
class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        int n = nums.size();
        long long maxi = -1;

        for(int i = 0 ; i < n ; i++){
            for(int j = i+1 ; j < n ; j++){
                long long gc = __gcd(nums[i] , nums[j]);
                long long ans = 1LL*nums[i] * nums[j] / (gc*gc);
                maxi = max(maxi , ans);
            }
        }

        return maxi;
    }
};