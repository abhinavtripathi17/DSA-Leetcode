// Last updated: 8/4/2026, 7:10:45 PM
class Solution {
    public boolean validateStackSequences(int[] pushed, int[] popped) {
        int n = pushed.length;
        Stack<Integer>st = new Stack<>();
        int j = 0;
        boolean isEmpty = false;
        for(int i = 0 ; i < n ; i++){
            st.push(i);
            while(!st.empty() && pushed[st.peek()] == popped[j]){
                st.pop();
                j++;
            }
        }
        if(st.empty()) return true;
        return false;
    }
}