// Last updated: 8/4/2026, 12:36:45 PM
class Solution {
    public int longestMonotonicSubarray(int[] nums) {
        int n = nums.length;
        int maxi = 1;
        int count1 = 1;
        int count2 = 1;
        for(int i = 1 ; i < n ; i++){
            if(nums[i] < nums[i-1]){
                count1++;
                count2 = 1;
            }

            else if(nums[i] > nums[i-1]){
                count2++;
                count1 = 1;
            }
            else{
                count1 = 1;
                count2 = 1;
            }
             
            maxi = Math.max(maxi ,Math.max(count1 , count2));
            
        }
        return maxi;
    }
}