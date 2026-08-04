// Last updated: 8/4/2026, 12:44:12 PM
class Solution {
public:
    int dp[1001];
    int maxJumps(vector<int>& arr, int d) {
        int n = arr.size();
        int ans = 1;
        memset(dp , -1 , sizeof(dp));
        for(int i = 0 ; i < n ; i++){
            ans = max(ans , solve(i , arr , d , n));
        }
        return ans;
    }
    int solve(int i , vector<int>&arr , int d , int n){
        int res = 1;

        if(dp[i] != -1) return dp[i];

        for(int j = i+1 ; j <= min(n-1 , i+d) ; j++){
            if(arr[j] >= arr[i]) break;
            res = max(res , 1+solve(j , arr , d , n));
        }
        for(int j = i-1 ; j >= max(0 , i-d) ; j--){
            if(arr[j] >= arr[i]) break;
            res = max(res , 1 + solve(j , arr , d , n));
        }

        return dp[i] = res;
    }
};