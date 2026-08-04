// Last updated: 8/4/2026, 12:43:06 PM
class Solution {
    public int numWaterBottles(int numBottles, int numExchange) {
        if(numBottles < numExchange) return numBottles;
        int ans = 0;
        int carry = 0;
        while(numBottles > 0){
            ans += numBottles;
            carry += numBottles;
            numBottles  = carry / numExchange;
            carry = carry % numExchange;
            
        }

        return ans;
    }
}