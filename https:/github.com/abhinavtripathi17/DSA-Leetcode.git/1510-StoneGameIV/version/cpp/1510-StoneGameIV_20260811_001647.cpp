// Last updated: 8/11/2026, 12:16:47 AM
1class Solution {
2public:
3    int dp[100001];
4    bool winnerSquareGame(int n) {
5        memset(dp , -1 , sizeof(dp));
6        return solve(n);
7    }
8
9    bool solve(int n){
10        if(n == 0){
11            return false; //who ever has curr turn looses the game
12        }
13
14        if(dp[n] != -1){
15            return dp[n];
16        }
17
18        for(int k = 1 ; k*k <= n ; k++){
19            if(solve(n - k*k) == false){
20                return dp[n] = true;
21            }
22        }
23
24        return dp[n] = false;
25    }
26};