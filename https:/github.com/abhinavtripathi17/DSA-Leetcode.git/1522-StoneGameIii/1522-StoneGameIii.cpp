// Last updated: 8/4/2026, 12:43:53 PM
class Solution {
public:
    string stoneGameIII(vector<int>& stoneValue) {
        int n = stoneValue.size();
        vector<int>dp(n+1 , INT_MAX);
        int ans = solve(stoneValue , 0 , n ,dp);
        if(ans > 0){
            return "Alice";
        }
        else if(ans == 0){
            return "Tie";
        }
        else return "Bob";
    }
    int solve(vector<int>&nums , int i , int n , vector<int>&dp){
        if(i >= n){
            return 0;
        }
        if(dp[i] != INT_MAX) return dp[i];

        int take = 0;
        int ans = INT_MIN;

        for(int k = 0 ; k < 3 && i + k < n ; k++){
            take += nums[i+k];
            ans = max(ans , take - solve(nums , i+k+1 , n , dp));
        } 

        return dp[i] = ans;
    }
};