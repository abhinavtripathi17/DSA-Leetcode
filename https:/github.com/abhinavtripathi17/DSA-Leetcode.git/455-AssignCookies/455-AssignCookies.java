// Last updated: 8/4/2026, 7:16:01 PM
class Solution {
    public int findContentChildren(int[] g, int[] s) {
        int i = 0 , j = 0;
        int cnt = 0;
        Arrays.sort(g);
        Arrays.sort(s);

        while(i < g.length &&  j < s.length){
            if(g[i] <= s[j]){
                cnt++;
                i++;
            }
            j++;
        }
        return cnt;
    }
}