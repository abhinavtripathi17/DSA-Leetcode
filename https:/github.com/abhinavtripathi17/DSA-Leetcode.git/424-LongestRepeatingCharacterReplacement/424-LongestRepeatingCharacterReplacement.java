// Last updated: 8/4/2026, 7:16:22 PM
class Solution {
    public int characterReplacement(String s, int k) {
        int n = s.length();
        Map<Character , Integer>mpp = new HashMap<>();

        int max_len = 0;
        int max_freq = 0;
        int l = 0 , r = 0;

        while(r < n){
            mpp.put(s.charAt(r) , mpp.getOrDefault(s.charAt(r) , 0)+1);
            max_freq = Math.max(max_freq , mpp.get(s.charAt(r)));

            while((r - l + 1) - max_freq > k){
                char leftChar = s.charAt(l);
                mpp.put(leftChar, mpp.get(leftChar) - 1);
                l++;
            }
            max_len = Math.max(max_len, r - l + 1);
            r++;
        }
        return max_len;
    }
}