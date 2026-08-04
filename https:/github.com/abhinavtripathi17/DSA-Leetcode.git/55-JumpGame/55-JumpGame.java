// Last updated: 8/4/2026, 7:24:24 PM
class Solution {
    public boolean canJump(int[] nums) {
        int n = nums.length;
        int maxi = 0;

        for(int i = 0 ; i < n; i++){
            if(i > maxi) return false;

            maxi = Math.max(i+nums[i] , maxi);

            if(maxi >= n) return true;
        }
        return true;
    }
}