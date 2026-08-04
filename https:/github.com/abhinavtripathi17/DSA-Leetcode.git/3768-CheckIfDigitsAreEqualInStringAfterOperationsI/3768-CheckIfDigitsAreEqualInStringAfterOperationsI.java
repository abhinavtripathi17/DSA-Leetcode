// Last updated: 8/4/2026, 12:34:57 PM
class Solution {
    public boolean hasSameDigits(String s) {
        

        while(s.length() > 2){
            String res = "";
            for(int i = 1 ; i < s.length() ; i++){
                int ans = ((s.charAt(i)-'0') + (s.charAt(i-1)-'0')) % 10;
                res += ans;
            }
            s = res;
        }

        if(s.charAt(0) == s.charAt(1)) return true;
        return false;
    }
}