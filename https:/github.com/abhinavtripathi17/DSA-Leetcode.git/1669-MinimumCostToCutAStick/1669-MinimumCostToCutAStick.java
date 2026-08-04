// Last updated: 8/4/2026, 12:42:58 PM
class Solution {
    int dp[][] = new int[101][101];
    public int minCost(int n, int[] cuts) {
        int c = cuts.length;
        ArrayList<Integer> ll = new ArrayList<>();
        for (int x : cuts) ll.add(x);
        ll.add(0);
        ll.add(n);
        Collections.sort(ll);
        for(int[] row : dp) Arrays.fill(row, -1);
        return solve(ll , 1 , c);
    }
    int solve(List<Integer>cuts , int i , int j){
        if(i > j){
            return 0;
        }
        if(dp[i][j] != -1) return dp[i][j];

        int mini = Integer.MAX_VALUE;
        for(int k = i; k <= j; k++) {
            int cost = cuts.get(j + 1) - cuts.get(i - 1)+ solve(cuts, i, k - 1)+ solve(cuts, k + 1, j);
            mini = Math.min(mini, cost);
        }
        return dp[i][j] = mini;
    }
}