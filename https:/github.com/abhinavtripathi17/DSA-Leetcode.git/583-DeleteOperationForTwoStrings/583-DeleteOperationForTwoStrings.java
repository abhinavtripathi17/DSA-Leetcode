// Last updated: 8/4/2026, 7:14:45 PM
class Solution {
    int dp[][] = new int[501][501];
    public int minDistance(String word1, String word2) {
        int n = word1.length();
        int m = word2.length();

        for(int i = 1 ; i <= n ; i++){
            for(int j = 1 ; j <= m ; j++){
                if(word1.charAt(i-1) == word2.charAt(j-1)){
                    dp[i][j] = 1 + dp[i-1][j-1];
                }

                else{
                    dp[i][j] = Math.max(dp[i-1][j] , dp[i][j-1]);
                }
            }
        }
        return (n + m) - 2 * dp[n][m];
    }
}