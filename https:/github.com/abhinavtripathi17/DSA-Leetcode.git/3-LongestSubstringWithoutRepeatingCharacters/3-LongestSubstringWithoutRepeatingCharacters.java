// Last updated: 8/4/2026, 7:26:54 PM
class Solution {
    public int lengthOfLongestSubstring(String s) {
        int l = 0 , r = 0;
        int n = s.length();
        int maxi = 0;
        Set<Character>st = new HashSet<>();

        while(r < n){
            while(st.contains(s.charAt(r))){
                st.remove(s.charAt(l));
                l++;
            }
            maxi = Math.max(maxi , r - l + 1);
            st.add(s.charAt(r));
            r++;
        }
        return maxi;
    }
}