// Last updated: 8/4/2026, 7:15:50 PM
class Solution {
    public int findTargetSumWays(int[] nums, int target) {
        int n = nums.length;
        int sum = 0;
        for(int i = 0 ; i < n ; i++){
            sum += nums[i];
        }
        int s1 = (sum + target)/2;
        if((sum + target) % 2 == 1) return 0;
        if(target > sum || target < -sum) return 0;

        int dp [][] = new int [n+1][s1+1];

        for(int i = 0 ; i <= s1 ; i++){
            dp[0][i] = 0;
        }
        for(int i = 0 ; i <= n ; i++){
            dp[i][0] = 1;
        }

        for(int i = 1 ; i <= n ; i++){
            for(int j = 0 ; j <= s1 ; j++){
                if(nums[i-1] <= j){
                    dp[i][j] = dp[i-1][j - nums[i-1]] + dp[i-1][j];
                }
                else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        return dp[n][s1];
    }
}