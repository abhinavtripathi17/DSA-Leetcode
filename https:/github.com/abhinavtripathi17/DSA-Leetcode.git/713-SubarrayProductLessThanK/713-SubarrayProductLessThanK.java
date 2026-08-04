// Last updated: 8/4/2026, 7:13:34 PM
class Solution {
    public int numSubarrayProductLessThanK(int[] nums, int k) {
        int n = nums.length;
        int l = 0 , r = 0;

        int maxprodsubarray = 0 ,  prod = 1;
        if(k <= 1) return 0;
        while(r < n){
            prod *= nums[r];

            while(prod >= k){
                prod = prod / nums[l];
                l++;
            }

            maxprodsubarray += (r - l + 1);
            r++;
        }
        return maxprodsubarray;
    }
}