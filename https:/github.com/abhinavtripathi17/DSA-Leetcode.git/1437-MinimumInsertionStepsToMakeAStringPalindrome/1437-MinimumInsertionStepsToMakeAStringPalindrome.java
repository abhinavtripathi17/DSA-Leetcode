// Last updated: 8/4/2026, 12:44:39 PM
class Solution {
    int dp[][] = new int[10001][1001];
    public int minInsertions(String s) {
        int n = s.length();

        String str = "";

        for(int i = n-1 ; i >= 0 ; i--){
            str += s.charAt(i);
        }
        
        for(int i = 1 ; i <= n ; i++){
            for(int j = 1 ; j <= n ; j++){
                if(s.charAt(i-1) == str.charAt(j-1)){
                    dp[i][j] = 1 + dp[i-1][j-1];
                }
                else{
                    dp[i][j] = Math.max(dp[i-1][j] , dp[i][j-1]);
                }
            }
        }

        return n - dp[n][n];

    }
}