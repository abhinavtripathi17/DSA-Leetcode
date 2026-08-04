// Last updated: 8/4/2026, 7:21:45 PM
class Solution {
    int dp[][] = new int[200][200];
    public int minimumTotal(List<List<Integer>> triangle) {
        int n = triangle.size();
        for(int i = 0 ; i < 200 ; i++){
            for(int j = 0 ; j < 200 ; j++){
                dp[i][j] = Integer.MIN_VALUE;
            }
        }
        return solve(triangle , 0 , 0);
    }

    public int solve(List<List<Integer>>triangle , int i , int j){
        int n = triangle.size();
        if(i == n-1) return triangle.get(i).get(j);

        if(dp[i][j] != Integer.MIN_VALUE) return dp[i][j];

        int down = triangle.get(i).get(j) + solve(triangle , i+1 , j);
        int diagonal = triangle.get(i).get(j)+ solve(triangle , i+1 , j+1);

        return dp[i][j] = Math.min(down , diagonal);
    }
}