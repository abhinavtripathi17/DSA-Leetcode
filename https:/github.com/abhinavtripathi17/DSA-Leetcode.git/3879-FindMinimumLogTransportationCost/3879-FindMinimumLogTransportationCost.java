// Last updated: 8/4/2026, 12:34:14 PM
class Solution {
    public long minCuttingCost(int n, int m, int k) {
        if(n < k && m < k) return 0;
        long cost = 0;

        if(n > k){
            long c1 = n-k;
            long c2 = n-c1;
            cost += c1 * c2;
        }
        if(m > k){
            long c1 = m-k;
            long c2 = m-c1;
            cost += c1 * c2;
        }
        return cost;
    }
}