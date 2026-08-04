// Last updated: 8/4/2026, 7:23:07 PM
class Solution {
    public int largestRectangleArea(int[] heights) {
        int n = heights.length;
        Stack<Integer>st = new Stack<>();
        int max_ans = 0;
        
        for(int i = 0 ; i <= n ; i++){
            int curr;
            if(i == n){
                curr = 0;
            }
            else{
                curr = heights[i];
            }

            while(!st.empty() && heights[st.peek()] > curr){
                int height = st.pop();
                int width;
                if(st.empty()){
                    width = i;
                }
                else{
                    width = i - st.peek() - 1;
                }

                max_ans = Math.max(max_ans , heights[height] * width);
            }
            st.push(i);
        }
        return max_ans;
    }
}