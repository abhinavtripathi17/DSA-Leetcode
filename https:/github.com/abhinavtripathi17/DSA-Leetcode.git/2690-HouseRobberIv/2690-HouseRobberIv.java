// Last updated: 8/4/2026, 12:38:30 PM
class Solution {
    public int minCapability(int[] nums, int k) {
        int n = nums.length;
        int low = Arrays.stream(nums).min().getAsInt();
        int high = Arrays.stream(nums).max().getAsInt();
        int ans = high;

        while(low <= high){
            int mid = (low + high)/2;

            if(ifPossible(nums , mid , k)){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
    public static boolean ifPossible(int[] nums , int mid , int k){
        int cnt = 0;
        for(int i = 0 ; i < nums.length ; i++){
            if(nums[i] <= mid){
                cnt++;
                i++;
            }
        }
        return cnt >= k;
    }
}