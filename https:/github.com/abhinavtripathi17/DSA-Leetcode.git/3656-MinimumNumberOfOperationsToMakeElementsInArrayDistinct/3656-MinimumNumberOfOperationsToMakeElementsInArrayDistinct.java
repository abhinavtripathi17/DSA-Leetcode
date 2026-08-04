// Last updated: 8/4/2026, 12:35:43 PM
class Solution {
    public int minimumOperations(int[] nums) {
         Set<Integer>st = new HashSet<>();
        for (int i = nums.length - 1; i >= 0; --i) {
            if (!st.add(nums[i])) {
                return (int)Math.ceil((i + 1) / 3.0);
            }
        }
        return 0;
    }
}