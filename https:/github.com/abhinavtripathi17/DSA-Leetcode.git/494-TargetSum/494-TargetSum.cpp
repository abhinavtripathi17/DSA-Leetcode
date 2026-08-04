// Last updated: 8/4/2026, 7:15:44 PM
class Solution {
public:
    int dp[21][1001];
    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        int sum = 0;
        for(int i = 0 ; i < n ; i++){
            sum += nums[i];
        }
        memset(dp , -1 , sizeof(dp));
        if((target+sum) % 2 != 0) return 0;
        if(target > sum || -target > sum) return 0;
        int s1 = (target + sum)/2;
        return solve(nums , s1 , n);


    }
    int solve(vector<int>&nums , int s1 , int n){
        if(n == 0){
            return s1 == 0;
        }

        if(dp[n][s1] != -1) return dp[n][s1];

        if(s1 >= nums[n-1]){
            return dp[n][s1] = solve(nums , s1-nums[n-1] , n-1) + solve(nums , s1 , n-1);
        }
        else{
            return dp[n][s1] = solve(nums , s1 , n-1);
        }

    }
};