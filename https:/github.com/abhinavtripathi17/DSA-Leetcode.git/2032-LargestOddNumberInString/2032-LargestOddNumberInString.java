// Last updated: 8/4/2026, 12:41:10 PM
class Solution {
    public String largestOddNumber(String num) {
        int n = num.length();
        String res = "";
        for(int i = n-1 ; i >= 0 ; i--){
            if((num.charAt(i) - '0') % 2 == 1){
                res = num.substring(0 , i+1);
                break;
            }
        }
        return res;
    }
}