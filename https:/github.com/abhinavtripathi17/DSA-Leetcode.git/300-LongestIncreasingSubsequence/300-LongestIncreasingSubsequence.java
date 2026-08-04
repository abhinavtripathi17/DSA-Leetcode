// Last updated: 8/4/2026, 7:17:29 PM
class Solution {
    public int lengthOfLIS(int[] nums) {
        int n = nums.length;
        List<Integer>ll = new ArrayList<>();

        int cnt = 1;
        ll.add(nums[0]);

        for(int i = 1 ; i < n ; i++){
            if(nums[i] > ll.get(ll.size() - 1)){
                ll.add(nums[i]);
                cnt++;
            }
            else{
                int idx = Collections.binarySearch(ll , nums[i]);

                if(idx < 0){
                    idx = -idx - 1;
                }
                ll.set(idx , nums[i]);
            }
        }
        return cnt;
    } 
    
}