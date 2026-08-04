// Last updated: 8/4/2026, 12:34:51 PM
class Solution {
    public int[] transformArray(int[] nums) {
        int n = nums.length;
        for(int i = 0 ; i < n ; i++){
            if(nums[i] % 2 == 0){
                nums[i] = 0;
            }
            else nums[i] = 1;
        }
        int cnt0 = 0;
        for(int i = 0 ; i < n ; i++){
            if(nums[i] == 0) cnt0++;
        }

        for(int i = 0 ; i < n ; i++){
            if(cnt0 > 0){
                nums[i] = 0;
                cnt0--;
            }
            else{
                nums[i] = 1;
            }
        }
        return nums;
    }
}