// Last updated: 8/4/2026, 7:23:43 PM
class Solution {
    public int climbStairs(int n) {
        int [] dp = new int[n+1];
      return stairs(n , 0 , dp);
        
    }
    public static int stairs(int n , int curr , int dp[]){
        int count = 0;
        if(curr == n){
            return 1;
        }
        if(curr > n){
            return 0;
        }
        if(dp[curr] != 0){
            return dp[curr];
        }
       int w1 =  stairs(n ,curr+1,dp);
       int w2 =  stairs(n ,curr+2,dp);
       dp[curr] = w1 + w2;
       return dp[curr];
    }
}