// Last updated: 8/4/2026, 7:18:02 PM
class Solution {
    public int[] maxSlidingWindow(int[] nums, int k) {
        int n = nums.length;
        Deque<Integer>dq = new ArrayDeque<>();
        int r = 0;
        int result[] = new int [n - k + 1];

        if(k == 1) return nums;

        for(int i = 0 ; i < n ; i++){
            if(!dq.isEmpty() && dq.peekFirst() <= i-k){
                dq.pollFirst();
            }
            while(!dq.isEmpty() && nums[i] >= nums[dq.peekLast()]){
                dq.pollLast();
            }
            dq.addLast(i);

            if(i >= k-1){
                result[r] = nums[dq.peekFirst()];
                r++;
            }

        }
        return result;
    }
}