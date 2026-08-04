// Last updated: 8/4/2026, 12:35:38 PM
class Solution {
public:
    int t[501][501][3];
    int solve(vector<vector<int>>& coins , int n , int m , int k){
        if(n == 0 && m == 0){
            if(coins[n][m] < 0 && k > 0){
                return 0;
            }
            return coins[n][m];
        }

        if(n < 0 || m < 0) return INT_MIN;

        if(t[n][m][k] != INT_MIN) return t[n][m][k];

        int take = coins[n][m] + max(solve(coins , n-1 , m , k) , solve(coins , n , m-1 , k));

        int skip = INT_MIN;

        if(coins[n][m] < 0 && k > 0){
            int skipUp = solve(coins , n , m-1 , k-1);
            int skipLeft = solve(coins , n-1 , m , k-1);

            skip = max(skipUp , skipLeft);
        } 

        return t[n][m][k] = max(take , skip);
    }
    int maximumAmount(vector<vector<int>>& coins) {
        int n = coins.size();
        int m = coins[0].size();

        for(int i = 0 ; i < 501 ; i++){
            for(int j = 0 ; j < 501 ; j++){
                for(int k = 0 ; k < 3 ; k++){
                    t[i][j][k] = INT_MIN;
                }
            }
        }

        int ans = solve(coins , n-1 , m-1 , 2);

        return ans;
    }
};