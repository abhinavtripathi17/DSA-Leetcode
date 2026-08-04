// Last updated: 8/4/2026, 7:14:36 PM
class Solution {
    public int findLHS(int[] nums) {
        Arrays.sort(nums);
        int n = nums.length;
        int maxi = 0;
        int j = 0 ; 
        for(int i = 0 ; i < n ; i++){
            while(nums[i] - nums[j] > 1){
                j++;
            }
            if(nums[i] - nums[j] == 1){
                maxi = Math.max(maxi , i - j + 1);
            }
        }
        return maxi;
       
    }
}