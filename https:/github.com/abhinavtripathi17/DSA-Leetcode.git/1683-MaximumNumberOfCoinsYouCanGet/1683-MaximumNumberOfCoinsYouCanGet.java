// Last updated: 8/4/2026, 12:42:47 PM
class Solution {
    public int maxCoins(int[] piles) {
        int n = piles.length;
        Arrays.sort(piles);
        int mineCoins = 0;
        
        int l = 0, r = n - 1;

        while (l < r) {
            r--;                  
            mineCoins += piles[r--]; 
            l++;                  
        }
        return mineCoins;
    }
    
}