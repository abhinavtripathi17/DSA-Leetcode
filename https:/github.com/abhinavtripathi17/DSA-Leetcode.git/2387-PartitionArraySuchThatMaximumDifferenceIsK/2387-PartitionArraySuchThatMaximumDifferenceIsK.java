// Last updated: 8/4/2026, 12:39:30 PM
class Solution {
    public int partitionArray(int[] nums, int k) {
        int n = nums.length;
        Arrays.sort(nums);

        int j = 0, i = 0;
        int cnt = 1;

        while(j < n){
            if(nums[j] - nums[i] > k){
                cnt++;
                i = j;
            }
            j++;
        }
        return cnt;
    }
}