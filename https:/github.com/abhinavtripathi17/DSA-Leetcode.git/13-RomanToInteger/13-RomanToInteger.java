// Last updated: 8/4/2026, 7:26:27 PM
class Solution {
    public int romanToInt(String s) {
        int num = 0 ; int ans = 0;

        for(int i = 0 ; i < s.length() ; i++){
            num = helper(s.charAt(i));

            if(i+1 < s.length() && num < helper(s.charAt(i+1))){
                ans = ans - num;
            }
            else{
                ans = ans + num;
            }
        }
        return ans;
    }
    public int helper(Character c){
        if(c == 'I') return 1;
        if(c == 'V') return 5;
        if(c == 'X') return 10;
        if(c == 'L') return 50;
        if(c == 'C') return 100;
        if(c == 'D') return 500;
        if(c == 'M') return 1000;
        else{
            return 0;
        }
    }
}