// Last updated: 8/4/2026, 7:25:43 PM
class Solution {
    public int removeDuplicates(int[] nums) {
        int i = 0;
        for(int k = 1 ; k < nums.length ; k++){
            if(nums[i] != nums[k]){
                i++;
                nums[i] = nums[k];
            }
        }
        return i+1;
    }
}