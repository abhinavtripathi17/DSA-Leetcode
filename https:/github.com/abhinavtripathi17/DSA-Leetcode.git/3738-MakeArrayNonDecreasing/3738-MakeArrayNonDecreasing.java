// Last updated: 8/4/2026, 12:35:22 PM
class Solution {
    public int maximumPossibleSize(int[] nums) {
        int n = nums.length;
        Stack<Integer>st = new Stack<>();

        for(int i = 0 ; i < n ; i++){
            while(!st.empty() && nums[i] < st.peek()){
                nums[i] = Math.max(st.pop() , nums[i]);
            }
            st.push(nums[i]);
        }
        return st.size();
    }
}