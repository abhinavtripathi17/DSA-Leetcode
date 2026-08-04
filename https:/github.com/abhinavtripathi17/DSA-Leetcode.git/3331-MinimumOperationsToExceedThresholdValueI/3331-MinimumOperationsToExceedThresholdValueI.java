// Last updated: 8/4/2026, 12:36:50 PM
class Solution {
    public int minOperations(int[] nums, int k) {
      int cnt = 0;
      
      for(int i = 0 ; i < nums.length ; i++){
        if(nums[i] < k){
            cnt++;
        }
      }
      return cnt;
    }
}