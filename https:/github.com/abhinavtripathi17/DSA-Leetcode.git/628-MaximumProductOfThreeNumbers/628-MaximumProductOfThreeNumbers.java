// Last updated: 8/4/2026, 7:14:25 PM
class Solution {
    public int maximumProduct(int[] nums) {
        int n = nums.length;
        Arrays.sort(nums);
        int maxi1 = nums[n-1] * nums[n-2] * nums[n-3];
        int maxi2 = nums[0] * nums[1] * nums[n-1];

        return Math.max(maxi1 , maxi2);
        
        
        
         
    }
}