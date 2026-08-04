// Last updated: 8/4/2026, 7:15:19 PM
class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        vector<vector<int>>dp(n+1 , vector<int>(amount+1 , -1));
        int ans = solve(amount , coins , dp , n);
        return ans;
    }

    int solve(int amount , vector<int>& coins , vector<vector<int>>& dp , int n){
        if(n == 0 || amount < 0){
            return 0;
        }

        if(amount == 0) return 1;
        if(dp[n][amount] != -1) return dp[n][amount];

        if(coins[n-1] <= amount){ //two choices -> take or not take
            return dp[n][amount] = solve(amount-coins[n-1] , coins , dp , n) + solve(amount , coins , dp , n-1);
        }
        else{
            return dp[n][amount] = solve(amount , coins, dp , n-1);
        }
    }
};