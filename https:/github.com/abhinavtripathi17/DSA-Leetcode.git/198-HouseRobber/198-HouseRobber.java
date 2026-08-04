// Last updated: 8/4/2026, 7:19:26 PM
class Solution {
    int dp[] = new int[101];
    public int rob(int[] nums) {
        Arrays.fill(dp , -1);
        int ans =   solve(nums , 0);
        return ans;

    }
    public int solve(int nums[] , int i){
        int n = nums.length;
        if(i >= n) return 0;
        if(dp[i] != -1) return dp[i];

        return dp[i] = Math.max(nums[i]+solve(nums , i+2) , solve(nums , i+1));
    }
}