// Last updated: 8/4/2026, 12:38:40 PM
class Solution {
    public long coloredCells(int n) {
        long result = 0;
        result = (long)Math.pow(n,2) + (long)Math.pow(n-1,2);
        return result;
    }
}