// Last updated: 8/4/2026, 12:38:51 PM
class Solution {
    public int[] applyOperations(int[] nums) {
        int n = nums.length;
        int num = 0;

        for(int i = 1 ; i < n ; i++){
            if(nums[num] == nums[i]){
                nums[num] *= 2;
                nums[i] = 0;
            }
            num++;
        }
        int counter = 0;
        for(int i = 0 ; i < n ; i++){
            if(nums[i] != 0){
                nums[counter++] = nums[i];
            }
        }
        for(int i = counter ; i < n ; i++){
            nums[i] = 0;
        }
        return nums;
    }
}