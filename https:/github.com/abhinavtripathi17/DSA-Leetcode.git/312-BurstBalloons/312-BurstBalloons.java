// Last updated: 8/4/2026, 7:17:08 PM
class Solution {
    int dp[][] = new int [301][301];
    public int maxCoins(int[] nums) {
        int n = nums.length;
        List<Integer>ll = new ArrayList<>();
        for(int num : nums) ll.add(num);

        ll.add(1);
        ll.add(0 , 1);

        for(int i = 0 ; i < 301 ; i++){
            for(int j = 0 ; j < 301 ; j++){
                dp[i][j] = -1;
            }
        }

        return solve(ll , 1 , n);

    }
    public int solve(List<Integer>ll , int i , int j){
        if(i > j) return 0;

        if(dp[i][j] != -1) return dp[i][j];
        int maxi = Integer.MIN_VALUE;

        for(int k = i ; k <= j ; k++){
            int cost = ll.get(i-1) * ll.get(k) * ll.get(j+1) + solve(ll , i , k-1) + solve(ll , k+1 , j);
            maxi = Math.max(cost , maxi);
        }
        return dp[i][j] = maxi;
    }
    
}