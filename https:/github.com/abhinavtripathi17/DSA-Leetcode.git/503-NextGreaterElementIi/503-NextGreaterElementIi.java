// Last updated: 8/4/2026, 7:15:24 PM
class Solution {
    public int[] nextGreaterElements(int[] nums) {
        int n = nums.length;
        int arr[] = new int[n];
        Stack<Integer>st = new Stack<>();

        for(int i = 0 ; i < 2*n ; i++){
            while(!st.empty() && nums[i%n] > nums[st.peek()]){
                arr[st.peek()] = nums[i%n];
                st.pop();
            }
            if(i < n){
            st.push(i%n);
            }
        }
        while(!st.empty()){
            arr[st.pop()] = -1;
        }
        return arr;
    }
}