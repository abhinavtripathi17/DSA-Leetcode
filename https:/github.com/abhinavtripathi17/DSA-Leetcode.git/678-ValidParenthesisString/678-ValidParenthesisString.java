// Last updated: 8/4/2026, 7:13:54 PM
class Solution {
    public boolean checkValidString(String s) {
       ArrayDeque<Integer>op_st = new ArrayDeque<>();
       ArrayDeque<Integer>star_st = new ArrayDeque<>();

       for(int i = 0 ; i < s.length() ; i++){
           char c = s.charAt(i);

           if(c == '('){
            op_st.push(i);
           }
           else if(c == '*'){
            star_st.push(i);
           }
           else{
            if(!op_st.isEmpty()){
                op_st.pop();
            }
            else if(!star_st.isEmpty()){
                star_st.pop();
            }
            else{
                return false;
            }
           }
       }

       while(!op_st.isEmpty() && !star_st.isEmpty()){
        if(op_st.pop() > star_st.pop()){
            return false;
        }
       }
       return op_st.isEmpty();
    }
}