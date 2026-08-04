// Last updated: 8/4/2026, 12:37:20 PM
class Solution {
    public long distributeCandies(int n, int limit) {
        long total = 0;
        for (long x = Math.max(0, n - 2 * limit); x <= Math.min(n, limit); x++) {
            long remaining = n - x;
            long yMin = Math.max(0, remaining - limit);
            long yMax = Math.min(remaining, limit);
            if (yMax >= yMin) {
                total += yMax - yMin + 1;
            }
        }
        return total;
    }
}