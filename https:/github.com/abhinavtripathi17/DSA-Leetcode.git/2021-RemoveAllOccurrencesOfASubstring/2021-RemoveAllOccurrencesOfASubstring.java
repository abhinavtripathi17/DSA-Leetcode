// Last updated: 8/4/2026, 12:41:15 PM
class Solution {
    public String removeOccurrences(String s, String part) {
        int n = s.length();
        int m = part.length();

        Stack<Character>st = new Stack<>();
        int i = 0;
        int j = m-1;
        while(i < n){
            st.push(s.charAt(i));
            if(st.size() >= m){
                boolean match = true;
                for(int k = 0; k < m; k++){
                    if(st.get(st.size() - m + k) != part.charAt(k)){
                        match = false;
                        break;
                    }
                }
                if(match){
                    for(int k = 0; k < m; k++){
                        st.pop();
                    }
                }
            }
            i++;
        }
        StringBuilder str = new StringBuilder();
        while(!st.empty()){
            str.append(st.peek());
            st.pop();
        }
        return str.reverse().toString();
    }
}