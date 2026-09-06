// Last updated: 9/6/2026, 11:33:32 PM
1class Solution {
2    public int numDistinct(String s, String t) {
3        int n = s.length();
4        int m = t.length();
5
6        int dp[][] = new int[n+1][m+1];
7
8        for(int i = 0 ; i <= n ; i++){
9            for(int j = 0 ; j <= m ; j++){
10                if(j == 0){
11                    dp[i][j] = 1;
12                }
13            }
14        }
15        
16
17        for(int i = 1 ; i <= n ; i++){
18            for(int j = 1 ; j <= m ; j++){
19                if(s.charAt(i-1) == t.charAt(j-1)){
20                    dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
21                }
22                else{
23                    dp[i][j] = dp[i-1][j];
24                }
25            }
26        }
27        return dp[n][m];
28
29    }
30}