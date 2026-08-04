// Last updated: 8/4/2026, 7:25:20 PM
class Solution {
    public int longestValidParentheses(String s) {
        int n = s.length();
        int cnt = 0;
        Stack<Integer>st = new Stack<>();
        st.push(-1);

        for(int i = 0 ; i < n ; i++){
            if(!st.empty() &&  st.peek() != -1 && s.charAt(i) == ')' && s.charAt(st.peek()) == '('){
                st.pop();
                cnt = Math.max(cnt , i - st.peek());
            }
            else{
            st.push(i);
            }
        }
        
        return cnt;
    }
}