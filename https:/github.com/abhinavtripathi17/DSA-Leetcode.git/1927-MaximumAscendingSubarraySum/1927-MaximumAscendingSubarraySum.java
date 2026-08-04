// Last updated: 8/4/2026, 12:41:37 PM
class Solution {
    public int maxAscendingSum(int[] nums) {
        int n = nums.length;
        if(n == 1) return nums[0];
        int sum = nums[0];
        int maxsum = 0;
        for(int i = 1; i < n ; i++){
            if(nums[i] > nums[i-1]){
                sum = sum + nums[i];
                maxsum = Math.max(sum,maxsum);
            }
            else{
             
                maxsum = Math.max(sum,maxsum);
                sum = nums[i]; 
            }
        }   
      
        return maxsum;
    }
}