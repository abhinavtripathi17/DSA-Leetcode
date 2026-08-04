// Last updated: 8/4/2026, 12:39:19 PM
class Solution {
    public long zeroFilledSubarray(int[] nums) {
        int n = nums.length;
        long cnt = 0;
        long streak = 0;

        for(int i = 0 ; i < n ; i++){
            if(nums[i] == 0){
                streak++;
                cnt += streak;
            }
            else{
                streak = 0;
            }
            
            
        }
        return cnt;
    }
}