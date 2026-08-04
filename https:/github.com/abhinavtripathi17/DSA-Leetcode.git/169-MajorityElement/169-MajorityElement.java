// Last updated: 8/4/2026, 7:19:58 PM
class Solution {
    public int majorityElement(int[] nums) {
        int n = nums.length;
        int var = nums[0];
        int count = 1;

        for(int i = 1 ; i < n ; i++){
            if(nums[i] == var) count++;

            else count--;

            if(count == 0){
                var = nums[i];
                count = 1;
            }
        }
        return var;
    }
}