// Last updated: 8/4/2026, 7:15:00 PM
class Solution {
    public int subarraySum(int[] nums, int k) {
        int n = nums.length;
        int count = 0;
        Map<Integer , Integer>mpp = new HashMap<>();
        mpp.put(0 , 1);
        int l = 0;
        int r = 0;
        int sum = 0;
        while(r < n){
            sum += nums[r];

            if(mpp.containsKey(sum - k)){
                count += mpp.get(sum - k);
            }
            mpp.put(sum, mpp.getOrDefault(sum, 0) + 1);
            r++;
        }
        return count;
    }
}