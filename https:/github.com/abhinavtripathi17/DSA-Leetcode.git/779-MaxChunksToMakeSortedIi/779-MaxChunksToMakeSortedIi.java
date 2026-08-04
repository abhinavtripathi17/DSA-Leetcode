// Last updated: 8/4/2026, 7:13:04 PM
class Solution {
    public int maxChunksToSorted(int[] arr) {
        Stack<Integer>st = new Stack<>();
        
        for(int i = 0 ; i < arr.length ; i++){
            int maxi = arr[i];
            while(!st.isEmpty() && arr[i] < st.peek()){
                maxi = Math.max(maxi , st.peek());
                st.pop();
            }
            
            st.push(maxi);
        }
        return st.size();
    }
}