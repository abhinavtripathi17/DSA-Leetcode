// Last updated: 8/4/2026, 12:32:54 PM
class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int n = nums.size();

        int iMax = nums[0];
        int ans = INT_MIN;

        for(int i = k ; i < n ; i++){
            iMax = max(iMax , nums[i-k]);
            ans = max(ans , nums[i] + iMax);
        }

        return ans;
    }
};