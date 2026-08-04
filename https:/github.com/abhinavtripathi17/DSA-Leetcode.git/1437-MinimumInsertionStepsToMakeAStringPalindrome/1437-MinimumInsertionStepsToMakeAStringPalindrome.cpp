// Last updated: 8/4/2026, 12:44:33 PM
class Solution {
public:
   
    int dp[501][501];
    int minInsertions(string s) {
        int n = s.length();
        string str = s;
        reverse(str.begin() , str.end());

        int len = lcs(s , str);

        return n - len;
    }
    int lcs(string s1 , string s2){
        int n = s1.length();
        int m = s2.length();

        for(int i = 0 ; i < n ; i++){
            dp[i][0] = 0;
            dp[0][i] = 0; //row == col
        }

        for(int i = 1 ; i <= n ; i++){
            for(int j = 1 ; j <= n ; j++){
                if(s1[i-1] == s2[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                }
                else{
                    dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
                }
            }
        }

        return dp[n][m];

    }
};