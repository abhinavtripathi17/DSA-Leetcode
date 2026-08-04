// Last updated: 8/4/2026, 12:34:26 PM
class Solution {
    public String lexicographicallySmallestString(String s) {
        int n = s.length();
        boolean[][] can = new boolean[n][n];

        java.util.function.BiFunction<Character, Character, Boolean> isConsecutive = (a, b) -> {
            int d = Math.abs(a - b);
            return d == 1 || d == 25;
        };

        for (int len = 1; len <= n; ++len) {
            for (int l = 0; l + len - 1 < n; ++l) {
                int r = l + len - 1;
                if ((len & 1) == 1) continue;
                for (int m = l + 1; m <= r; ++m) {
                    if (isConsecutive.apply(s.charAt(l), s.charAt(m))) {
                        boolean leftGood = (m == l + 1) || can[l + 1][m - 1];
                        boolean rightGood = (m == r) || can[m + 1][r];
                        if (leftGood && rightGood) {
                            can[l][r] = true;
                            break;
                        }
                    }
                }
            }
        }

        String[] dp = new String[n + 1];
        dp[n] = "";

        for (int i = n - 1; i >= 0; --i) {
            dp[i] = s.charAt(i) + dp[i + 1];
            for (int j = i + 1; j < n; ++j) {
                if (isConsecutive.apply(s.charAt(i), s.charAt(j)) &&
                    ((j == i + 1) || can[i + 1][j - 1])) {
                    if (dp[j + 1].compareTo(dp[i]) < 0) {
                        dp[i] = dp[j + 1];
                    }
                }
            }
        }

        return dp[0];
    }
}