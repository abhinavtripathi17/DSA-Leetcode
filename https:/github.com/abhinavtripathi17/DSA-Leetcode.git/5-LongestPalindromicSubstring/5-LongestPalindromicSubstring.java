// Last updated: 8/4/2026, 7:26:38 PM
class Solution {
    int dp[][] = new int [1001][1001];
    public String longestPalindrome(String s) {
        int n = s.length();
        String str = "";
        for (int i = n - 1; i >= 0; i--) {
            str += s.charAt(i); 
        }

        int maxLen = 0;
        int endIndex = 0;

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (s.charAt(i - 1) == str.charAt(j - 1)) {
                    dp[i][j] = 1 + dp[i - 1][j - 1];

                    int origStart = i - dp[i][j];   
                    int revStart = n - j;           
                    if (origStart == revStart) {   
                        if (dp[i][j] > maxLen) {
                            maxLen = dp[i][j];
                            endIndex = i - 1;
                        }
                    }
                } else {
                    dp[i][j] = 0; 
                }
            }
        }

        return s.substring(endIndex - maxLen + 1, endIndex + 1);

    }
}