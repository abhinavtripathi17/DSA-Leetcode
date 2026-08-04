// Last updated: 8/4/2026, 7:09:45 PM
class Solution {
    public String removeOuterParentheses(String s) {
        int n = s.length();
        int balance = 0;
        int start = 0;
        String res = "";

        for(int i = 0 ; i < n ; i++){
            if(s.charAt(i) == '('){
                balance++;
            }
            else{
                balance--;
            }

            if(balance == 0){
                res += s.substring(start+1 , i);
                start = i+1;
            }
        }
        return res;
    }
}