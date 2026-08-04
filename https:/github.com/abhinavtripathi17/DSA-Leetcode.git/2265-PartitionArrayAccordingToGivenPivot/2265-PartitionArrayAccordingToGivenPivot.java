// Last updated: 8/4/2026, 12:40:01 PM
class Solution {
    public int[] pivotArray(int[] nums, int pivot) {
        int n = nums.length;
        int res[] = new int[n];

        int l = 0 , r = n-1;
        
        for(int i = 0 ; i < n ; i++){
            if(nums[i] < pivot){
                res[l] = nums[i];
                l++;
            }
            
            if(nums[n - i - 1] > pivot){
                res[r] = nums[n-i-1];
                r--;
            }
        }
        for(int i = l ; i <= r ; i++){
            res[i] = pivot;
        }
        return res;
    }
}