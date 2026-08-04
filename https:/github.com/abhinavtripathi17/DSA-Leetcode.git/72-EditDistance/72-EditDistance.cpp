// Last updated: 8/4/2026, 7:23:25 PM
class Solution {
public:
    int dp[502][502];
    int minDistance(string word1, string word2) {
        for(int i = 0 ; i <= 501 ; i++){
            for(int j = 0 ; j <= 501 ; j++){
                dp[i][j] = -1;
            }
        }
        return solve(word1 , word2 , word1.length() , word2.length());

    }

    int solve(string &x , string &y , int n , int m){
        if(n == 0) return m;
        if(m == 0) return n;

        if(dp[n][m] != -1) return dp[n][m];

        if(x[n-1] == y[m-1]){
            return dp[n][m] = solve(x , y , n-1 , m-1);
        }
        else{
            return dp[n][m] = 1+ min(solve(x , y , n-1 , m) , min(solve(x , y , n , m-1) , solve(x , y , n-1 , m-1)));
        }
        return dp[n][m];
    }
};