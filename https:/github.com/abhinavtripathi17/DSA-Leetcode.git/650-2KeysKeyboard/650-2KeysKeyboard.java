// Last updated: 8/4/2026, 7:14:06 PM
class Solution {
    int dp[][] = new int [1001][1001];
    public int minSteps(int n) {
        if(n == 1) return 0;
        for(int i = 0 ; i < 1000 ; i++){
            for(int j = 0 ; j < 1000 ; j++){
                dp[i][j] = -1;
            }
        }
        return 1 + solve(1 , 1 , n);
    }
    public int solve(int currA , int clipA , int n){
        if(currA == n) return 0;

        if(currA > n) return  10000000;

        if(dp[currA][clipA] != -1) return dp[currA][clipA];

        int copyPaste = 2 + solve(currA + currA , currA , n);
        int paste = 1 + solve(currA + clipA , clipA , n);

        return dp[currA][clipA]= Math.min(copyPaste , paste);
    }
}