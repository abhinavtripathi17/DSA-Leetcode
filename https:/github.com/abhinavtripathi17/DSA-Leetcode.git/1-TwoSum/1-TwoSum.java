// Last updated: 8/4/2026, 7:27:00 PM
class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer , Integer>mpp = new HashMap<>();
        for(int i = 0 ; i < nums.length ; i++){
            int req = target - nums[i];
            if(mpp.containsKey(req)){
                return new int [] {i,mpp.get(req)};
            }
            mpp.put(nums[i] , i);
        }
        return new int[]{};
    }  
    
}