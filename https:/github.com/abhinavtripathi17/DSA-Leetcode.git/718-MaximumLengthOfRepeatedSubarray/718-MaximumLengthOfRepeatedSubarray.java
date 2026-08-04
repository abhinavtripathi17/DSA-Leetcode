// Last updated: 8/4/2026, 7:13:29 PM
class Solution {
    int dp[][] = new int[1001][1001];
    public int findLength(int[] nums1, int[] nums2) {
        int m = nums1.length;
        int n = nums2.length;
        int maxi = 0;
        for(int i = 1 ; i <= m ; i++){
            for(int j = 1 ; j <= n ; j++){
                if(nums1[i-1] == nums2[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                    maxi = Math.max(dp[i][j] , maxi);
                }
                else{
                    dp[i][j] = 0;
                }
            }
        }
       return maxi; 
    }
}