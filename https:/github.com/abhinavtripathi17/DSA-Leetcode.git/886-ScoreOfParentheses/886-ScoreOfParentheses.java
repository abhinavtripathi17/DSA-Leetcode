// Last updated: 8/4/2026, 7:12:01 PM
class Solution {
    public int scoreOfParentheses(String s) {
        int curr = 0 ;
        Stack<Integer>st = new Stack<>();

        for(char ch : s.toCharArray()){
            if(ch == '('){
                st.push(curr);
                curr = 0;
            }
            else{
                curr = st.pop() + Math.max(2*curr , 1);
            }
        }
        return curr;
    }
}