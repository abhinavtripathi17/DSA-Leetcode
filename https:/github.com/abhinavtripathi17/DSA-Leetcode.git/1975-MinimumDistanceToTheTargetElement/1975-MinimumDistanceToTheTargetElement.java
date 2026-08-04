// Last updated: 8/4/2026, 12:41:23 PM
class Solution {
    public int getMinDistance(int[] nums, int target, int start) {

        int min = Integer.MAX_VALUE;

        for (int i = 0; i < nums.length; i++) {
            if (nums[i] == target) {
                min = Math.min(min, Math.abs(start - i));
            }
        }

        return min;
    }
}