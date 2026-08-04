// Last updated: 8/4/2026, 7:11:15 PM
class Solution {
    public int maxSubarraySumCircular(int[] nums) {
        int max_sum = kadaneMaxSum(nums);
        int min_sum = kadaneMinSum(nums);
        int total_sum = 0;
        for(int num : nums){
            total_sum += num;
        }

        
        if (max_sum < 0) return max_sum;

        int circular_sum = total_sum - min_sum;
        return Math.max(circular_sum , max_sum);
    }
    public int kadaneMaxSum(int nums[]){
        int curr_sum = 0;
        int max_sum = Integer.MIN_VALUE;

        for(int i = 0 ; i < nums.length ; i++){
            curr_sum = Math.max(curr_sum + nums[i] , nums[i]);
            max_sum = Math.max(curr_sum , max_sum);
        }
        return max_sum;
    }

    public int kadaneMinSum(int nums[]){
        int curr_sum = 0;
        int min_sum = Integer.MAX_VALUE;

        for(int i = 0 ; i < nums.length ; i++){
            curr_sum = Math.min(curr_sum + nums[i] , nums[i]);
            min_sum = Math.min(curr_sum , min_sum);
        }
        return min_sum;
    }
}