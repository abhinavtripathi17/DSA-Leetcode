// Last updated: 8/4/2026, 12:34:28 PM
class Solution {
    public String resultingString(String s) {
        int n = s.length();
        Stack<Character>st = new Stack<>();

        for(char ch : s.toCharArray()){
            if(!st.empty()){
                char c = st.peek();
                if(Math.abs(ch - c) == 1 || Math.abs(ch - c) == 25){
                    st.pop();
                    continue;
                }
            }
            st.push(ch);
        }
        StringBuilder str = new StringBuilder();
        while(!st.empty()){
            str.append(st.pop());
        }
        str.reverse();
        return str.toString();
    }
}