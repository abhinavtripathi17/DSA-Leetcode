// Last updated: 8/4/2026, 12:43:26 PM
class Solution {
    public int longestSubarray(int[] nums) {
       int n = nums.length;

       int l = 0 , r = 0;
       int sum = 0 , ans = 0;
       int zero_cnt = 0;

        while(r < n){
            sum += nums[r];
            if(zero_cnt > 1){
                sum -= nums[l];
                if(nums[l] == 0){
                    zero_cnt --;
                }
                l++;
            }
            if(nums[r] == 0){
                zero_cnt++;
            }
            
            ans = Math.max(sum , ans);
            r++;
        }
        if(ans == n) return ans - 1;
        else return ans;

    }
}