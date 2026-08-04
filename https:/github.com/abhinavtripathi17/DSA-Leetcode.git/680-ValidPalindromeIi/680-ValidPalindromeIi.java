// Last updated: 8/4/2026, 7:13:50 PM
class Solution {
    public boolean validPalindrome(String s) {
        int l = 0, r = s.length() - 1;
        while(l < r) {
            char lc = s.charAt(l);
            char rc = s.charAt(r);

            if(lc != rc) return compare(s, l + 1, r) || compare(s, l, r - 1);
            l++;
            r--;
        }
        return true;
    }
    public boolean compare(String s, int l, int r) {
        while(l < r) {
            
            char lc = s.charAt(l);
            char rc = s.charAt(r);
            if(lc != rc) return false;
        
            l++;
            r--;
        }
        return true;
    }
}