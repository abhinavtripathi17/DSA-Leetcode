// Last updated: 8/4/2026, 7:24:54 PM
class Solution {
    public int trap(int[] height) {
        int l_max = 0;
        int r_max = 0;
        int curr = 0;
        int ans = 0;
        Stack<Integer>st = new Stack<>();
        for(int i = 0 ; i < height.length ; i++){
            while(!st.empty() && height[i] > height[st.peek()]){
                r_max = i;
                curr = st.pop();
                if(st.empty()) break;
                l_max = st.peek();
                int width = r_max - l_max - 1;

                ans += (Math.min(height[l_max],height[r_max]) - height[curr]) * width;
            }
            st.push(i);
        }
        return ans;
    }
}