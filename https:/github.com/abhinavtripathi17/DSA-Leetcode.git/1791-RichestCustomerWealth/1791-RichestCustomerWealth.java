// Last updated: 8/4/2026, 12:42:21 PM
class Solution {
    public int maximumWealth(int[][] accounts) {
        int n = accounts.length;
        int m = accounts[0].length;
        int maxi = 0;

        for(int i = 0 ; i < n ; i++){
            int sum = 0;
            for(int j = 0 ; j < m ; j++){
                sum += accounts[i][j];
            }
            maxi = Math.max(maxi , sum);
        }

        return maxi;
    }
}