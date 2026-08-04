// Last updated: 8/4/2026, 12:40:54 PM
class Solution {
    public int[] buildArray(int[] nums) {
        int arr[] = new int[nums.length];
        for(int i = 0 ; i < nums.length ; i++){
            arr[i] = nums[nums[i]];
        }
        return arr;
    }
}