// Last updated: 8/4/2026, 12:45:15 PM
class Solution {
    public int numberOfSubarrays(int[] nums, int k) {
       int a = numberOfSubarrayslessthan_k(nums, k);
       int b = numberOfSubarrayslessthan_k(nums, k-1);

       return a - b;

    }
    public int numberOfSubarrayslessthan_k(int[] nums, int k) {
      int n = nums.length;
      int l = 0 , r = 0;
      int sum = 0 , subarr_cnt = 0; 

      while(r < n){
        sum += nums[r] % 2;

        while(sum > k){
            sum -= nums[l] % 2;
            l++;
        }

        subarr_cnt += r - l +1;
        r++;
      } 
      return subarr_cnt;

    }
}