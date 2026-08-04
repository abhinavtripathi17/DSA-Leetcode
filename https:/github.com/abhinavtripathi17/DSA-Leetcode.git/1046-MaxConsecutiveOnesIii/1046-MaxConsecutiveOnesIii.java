// Last updated: 8/4/2026, 7:10:04 PM
class Solution {
    public int longestOnes(int[] nums, int k) {
        int n = nums.length;
        int zeros = 0;
        int maxcnt = 0;
        int l = 0 , r = 0;

        while(r < n){

            if(nums[r] == 0) zeros++;

            if(zeros > k){
                if(nums[l] == 0){
                    zeros--;
                }
                l++;
            }

            if(zeros <= k){
                maxcnt = Math.max(maxcnt , r-l+1);
            }
            r++;
        }
        return maxcnt;
    }
}