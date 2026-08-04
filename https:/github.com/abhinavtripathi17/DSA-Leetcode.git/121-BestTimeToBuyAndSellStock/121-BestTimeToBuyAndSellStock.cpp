// Last updated: 8/4/2026, 7:21:42 PM
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int min_price = prices[0] , profit = 0;
        for(int i = 0 ; i < n ; i++){
            int cost = prices[i] - min_price;
            profit = max(profit , cost);
            min_price = min(min_price , prices[i]);
        }
        return profit;
    }
};