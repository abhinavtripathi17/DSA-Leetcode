// Last updated: 8/4/2026, 12:42:14 PM
class Solution {
    public boolean check(int[] nums) {
        int count = 0;
        for(int i = 0 ; i < nums.length-1 ; i++){
            if(nums[i] > nums[i+1]) count++;
    }
    if(nums[nums.length - 1] > nums[0]) count++;

    if(count <= 1) return true;
    return false;

    }
}