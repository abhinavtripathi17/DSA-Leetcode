// Last updated: 8/4/2026, 12:38:47 PM
class Solution {
    public long maximumSubarraySum(int[] nums, int k) {
        int n = nums.length;
        HashMap<Integer , Integer>mpp = new HashMap<>();

        int  l = 0 ,  r = 0;
        long sum = 0 , ans = 0;

        while(r < n){
            sum += nums[r];
            mpp.put(nums[r] , mpp.getOrDefault(nums[r] , 0)+1);
            if(r - l + 1 == k){
                if(mpp.size() == k){
                    ans = Math.max(ans , sum);
                }
                sum -= nums[l];
                int old_freq = mpp.get(nums[l]);

                if(old_freq > 1){
                    mpp.put(nums[l] , old_freq - 1);
                }
                else{
                    mpp.remove(nums[l]);
                }
                l++;
            }
            r++;
        }
        return ans;
    }
}