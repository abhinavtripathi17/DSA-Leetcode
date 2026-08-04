// Last updated: 8/4/2026, 7:20:29 PM
class Solution {
    public int evalRPN(String[] tokens) {
        Stack<Integer>st = new Stack<>();

        for(int i = 0 ; i < tokens.length ; i++){
            if(tokens[i].equals("*")){
                int a = st.pop();
                int b = st.pop();
                st.push(b*a);
            }
            else if(tokens[i].equals("-")){
                int a = st.pop();
                int b = st.pop();
                st.push(b-a);
            }
            else if(tokens[i].equals("/")){
                int a = st.pop();
                int b = st.pop();
                st.push(b/a);
            }
            else if(tokens[i].equals("+")){
                int a = st.pop();
                int b = st.pop();
                st.push(b+a);
            }
            else{
                st.push(Integer.parseInt(tokens[i]));
            }
        }
        return st.pop();
    }
}