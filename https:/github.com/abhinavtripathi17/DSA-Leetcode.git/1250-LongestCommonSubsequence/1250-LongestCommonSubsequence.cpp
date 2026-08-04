// Last updated: 8/4/2026, 7:09:06 PM
class Solution {
public:
    int dp[1001][1001];
    int longestCommonSubsequence(string text1, string text2) {
        for(int i = 0 ; i < 1001 ; i++){
            for(int j = 0 ; j < 1001 ; j++){
                dp[i][j] = -1;
            }
        }
        return lcs(text1 , text2 , text1.length() , text2.length());
    }
    int lcs(string &x , string &y , int n , int m){
        if(n == 0 || m == 0){
            return 0;
        }
        if(dp[n][m] != -1) return dp[n][m];
        if(x[n-1] == y[m-1]){
            return dp[n][m] = 1 + lcs(x , y , n-1 , m-1);
        }
        else{
            return dp[n][m] = max(lcs(x , y , n-1 , m) , lcs(x , y , n , m-1));
        }
    }
};