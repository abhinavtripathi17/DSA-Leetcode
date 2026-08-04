// Last updated: 8/4/2026, 12:37:48 PM
class Solution {
    public int countCompleteSubarrays(int[] nums) {
       Map<Integer , Integer>mpp = new HashMap<>();
       for(int num : nums){
        mpp.put(num , mpp.getOrDefault(num , 0)+1);
       } 
       int k = mpp.size();
       mpp = new HashMap<>();
       int l = 0 , r = 0;
       int ans = mpp.size();

       while(r < nums.length){
        mpp.put(nums[r] , mpp.getOrDefault(nums[r],0)+1);
        while(mpp.size() == k){
            ans += nums.length-r;
            mpp.put(nums[l] , mpp.get(nums[l])-1);
            if(mpp.get(nums[l]) == 0){
                mpp.remove(nums[l]);
            }
            l++;
        }
        r++;
       }
       return ans;
    }
}