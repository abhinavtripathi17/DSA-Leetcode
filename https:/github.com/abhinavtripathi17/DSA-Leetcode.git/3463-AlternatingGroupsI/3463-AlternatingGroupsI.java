// Last updated: 8/4/2026, 12:36:16 PM
class Solution {
    public int numberOfAlternatingGroups(int[] colors) {
        int n = colors.length;
        int cnt = 0;

        for (int i = 0; i < n; i++) {
            if (colors[i % n] != colors[(i + 1) % n] && colors[(i + 1) % n] != colors[(i + 2) % n]) {
                cnt++;
            }
        }
        return cnt;
    }
}