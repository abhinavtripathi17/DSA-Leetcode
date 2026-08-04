// Last updated: 8/4/2026, 12:40:59 PM
class Solution {
    public int maxProductDifference(int[] nums) {
        Arrays.sort(nums);
        int n = nums.length;
        int max1 = nums[n-1];
        int max2 = nums[n-2];
        int mini1 = nums[0];
        int mini2 = nums[1];

        return (max1*max2)-(mini1*mini2);
    }
}