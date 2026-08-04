// Last updated: 8/4/2026, 7:16:40 PM
class Solution {
public:
    int dp[100001];
    int maxRotateFunction(vector<int>& nums) {
        int n = nums.size();
        memset(dp , 0 , sizeof(dp));
        int sum = 0;
        for(int i = 0 ; i < n ; i++){
            dp[0] += i * nums[i];
            sum += nums[i];
        }
        
        int maxi = dp[0];

        for(int i = 1 ; i < n ; i++){
            dp[i] = (dp[i-1] + sum - (n* nums[n-i]));
            maxi = max(dp[i] , maxi);
        }

        return maxi;

    }
};