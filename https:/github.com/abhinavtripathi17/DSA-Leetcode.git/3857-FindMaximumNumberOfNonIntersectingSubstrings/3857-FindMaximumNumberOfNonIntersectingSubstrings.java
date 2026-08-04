// Last updated: 8/4/2026, 12:34:34 PM
class Solution {
    public int maxSubstrings(String word) {
        int len = word.length();
        if (len < 4) return 0;

        int[] dp = new int[len + 1];
        int[] max_dp = new int[26];
        Arrays.fill(max_dp, -1);

        for (int i = 1; i <= len; ++i) {
            dp[i] = dp[i - 1];

            if (i >= 4) {
                char s = word.charAt(i - 4);
                int si = s - 'a';
                if (max_dp[si] == -1) {
                    max_dp[si] = dp[i - 4];
                } else {
                    max_dp[si] = Math.max(max_dp[si], dp[i - 4]);
                }
            }

            char e = word.charAt(i - 1);
            int ei = e - 'a';
            if (max_dp[ei] != -1) {
                dp[i] = Math.max(dp[i], 1 + max_dp[ei]);
            }
        }

        return dp[len];
    }
}