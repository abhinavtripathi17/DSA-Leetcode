// Last updated: 8/4/2026, 12:36:26 PM
class Solution {
    public String clearDigits(String s) {
        Stack<Character>st = new Stack<>();
        StringBuilder str = new StringBuilder();
        for(int i = 0 ; i < s.length() ; i++){
            if(Character.isDigit(s.charAt(i))){
                if(!st.empty())
                    st.pop();
            }
            else st.push(s.charAt(i));
        }
        if(st.empty()) return "";
        // for(int i = 0 ; i < st.size() ; i++){
        //     if(!st.empty()){
        //         str.append(st.peek());
        //         st.pop();
        //     }
        // } cann't use this as size() is dynamic
        while(!st.empty()){
            str.append(st.peek());
            st.pop();
        }
        return str.reverse().toString();
        
        
    }
}