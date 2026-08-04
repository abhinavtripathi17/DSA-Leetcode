// Last updated: 8/4/2026, 12:41:43 PM
class Solution {
    public boolean areAlmostEqual(String s1, String s2) {
        int cnt = 0 ; 
        int first = -1 , second = -1;

        for(int i = 0 ; i < s1.length() ; i++){
            if(s1.charAt(i) != s2.charAt(i)){
                cnt++;
                if(cnt == 1) first = i;
                else if(cnt == 2) second = i;
                else return false;
            }
        }
        if(cnt == 0 ) return true;
        else if(cnt == 2 && s1.charAt(first) == s2.charAt(second) && s1.charAt(second) == s2.charAt(first)) return true;

        return false;
    }
}