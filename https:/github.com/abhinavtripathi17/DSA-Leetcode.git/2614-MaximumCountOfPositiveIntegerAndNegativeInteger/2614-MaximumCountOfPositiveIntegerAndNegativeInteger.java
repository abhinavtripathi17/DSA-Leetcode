// Last updated: 8/4/2026, 12:38:43 PM
class Solution {
    public int maximumCount(int[] nums) {
       int a = first_positive(nums);
       int b = last_negative(nums);
       int max_cnt = Math.max(a , b);

       return max_cnt;
    }
    public int last_negative(int [] nums){
        int n = nums.length;
        int low = 0 , high = n - 1;
        int last_neg = 0;
        if(nums[0] >= 0) return 0;

        while(low <= high){
            int mid = (low + high) / 2;

            if(nums[mid] < 0){
                last_neg = mid;
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return  last_neg + 1;
    }
    public int first_positive(int [] nums){
        int n = nums.length;
        int low = 0 , high = n - 1;
        int first_pos = 0;
        if(nums[0] > 0) return n;

        while(low <= high){
            int mid = (low + high) / 2;

            if(nums[mid] <= 0){
                first_pos = mid + 1;
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return n - first_pos;
    }
}