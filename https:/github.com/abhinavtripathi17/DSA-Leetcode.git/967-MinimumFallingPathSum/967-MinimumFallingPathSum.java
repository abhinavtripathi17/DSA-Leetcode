// Last updated: 8/4/2026, 7:10:58 PM
class Solution {
    int dp[][] = new int [100][100];
    public int minFallingPathSum(int[][] matrix) {
        int n = matrix.length;
        int mini = Integer.MAX_VALUE;

        for(int i = 0 ; i < 100 ; i++){
            for(int j = 0 ; j < 100 ; j++){
                dp[i][j] = Integer.MAX_VALUE;
            }
        }

        for(int j = 0 ; j < n ; j++){
            int ans = solve(matrix , 0 , j , n);
            mini = Math.min(ans , mini);
        }
        return mini;
    }

    public int solve(int matrix[][] , int i , int j , int n){
        if(i < 0 || j < 0 || i >= n || j >= n) return 10000000;

        if(i == n-1) return matrix[i][j];
        if(dp[i][j] != Integer.MAX_VALUE) return dp[i][j];
        
        int p1 = matrix[i][j] + solve(matrix , i+1 , j-1 , n);
        int p2 = matrix[i][j] + solve(matrix , i+1 , j , n);
        int p3 = matrix[i][j] + solve(matrix , i+1 , j+1 , n);

        return dp[i][j] = Math.min(p1,Math.min(p2,p3));

    }
}