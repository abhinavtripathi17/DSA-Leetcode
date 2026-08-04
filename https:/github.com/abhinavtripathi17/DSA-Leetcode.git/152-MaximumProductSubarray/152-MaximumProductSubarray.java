// Last updated: 8/4/2026, 7:20:16 PM
class Solution {
    public int maxProduct(int[] nums) {
        int n = nums.length;
        int bef = 1 , aft = 1;
        int ans = Integer.MIN_VALUE;

        for(int i = 0 ; i < n ; i++){
            if(bef == 0) bef = 1;
            if(aft == 0) aft = 1;

            bef *= nums[i];
            aft *= nums[n-i-1];
            ans = Math.max(ans , Math.max(aft , bef));

        }
        return ans;
    }
}