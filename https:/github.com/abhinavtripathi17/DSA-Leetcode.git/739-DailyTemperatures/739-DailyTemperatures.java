// Last updated: 8/4/2026, 7:13:16 PM
class Solution {
    public int[] dailyTemperatures(int[] temperatures) {
        int n = temperatures.length;
        int result[] = new int [n];
        Stack<Integer>st = new Stack<>();
        for(int i = 0 ; i < n ; i++){
            while(!st.empty() && temperatures[st.peek()] < temperatures[i]){
                int cnt = i - st.peek();
                result[st.pop()] = cnt;
                
            }
            st.push(i);
        }
        return result;
    }
}