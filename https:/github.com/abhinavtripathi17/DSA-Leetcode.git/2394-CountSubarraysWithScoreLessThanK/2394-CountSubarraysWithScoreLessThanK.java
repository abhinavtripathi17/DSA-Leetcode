// Last updated: 8/4/2026, 12:39:25 PM
class Solution {
    public long countSubarrays(int[] nums, long k) {
        long ans = 0;
        long sum = 0;
        int l = 0 , r = 0;
        while(r < nums.length){
            sum = sum + nums[r];
            while(sum * (r-l+1) >= k){
                sum = sum - nums[l];
                l++;
            }
            ans += r-l+1;
            r++;
        }
        return ans;
    }
}