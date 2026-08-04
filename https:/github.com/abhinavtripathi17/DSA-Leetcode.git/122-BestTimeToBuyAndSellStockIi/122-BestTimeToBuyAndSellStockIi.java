// Last updated: 8/4/2026, 7:21:39 PM
class Solution {
    public int maxProfit(int[] prices) {
        int buy = prices[0];
        int profit = 0;
        int total_profit = 0;
        
        for(int i = 1 ; i < prices.length ; i++){
            profit = prices[i] - buy;
            
            if(profit > 0){
                total_profit += profit;
                buy = prices[i];
            }
            else if(prices[i] <= buy){
                buy = prices[i];
            }
        }
        return total_profit;
    }
}