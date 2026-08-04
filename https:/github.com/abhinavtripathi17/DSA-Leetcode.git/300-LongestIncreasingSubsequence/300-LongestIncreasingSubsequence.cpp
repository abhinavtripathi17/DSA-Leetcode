// Last updated: 8/4/2026, 7:17:23 PM
class Solution {
public:
    
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>dp(n , vector<int>(n+1 , -1));
        return lis(nums , 0 , -1, n , dp);
    }

    int lis(vector<int>& nums , int idx , int prevIdx , int n , vector<vector<int>>& dp){

        if(idx == n){
            return 0;
        }

        if(dp[idx][prevIdx+1] != -1) return dp[idx][prevIdx+1];
        int len = lis(nums , idx+1 , prevIdx , n , dp);

        if(prevIdx == -1 || nums[idx] > nums[prevIdx]){
            len = max(len , 1 + lis(nums , idx+1 , idx , n , dp));
        }

        return dp[idx][prevIdx+1] = len;
    }
};