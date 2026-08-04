// Last updated: 8/4/2026, 7:17:37 PM
class Solution {
    public int findDuplicate(int[] nums) {
       int n = nums.length;
        int arr[] = new int [n+1];

        for(int i = 0 ; i < n ; i++){
            arr[nums[i]]++;
        }
        for(int i = 1 ; i <= n ; i++){
            if(arr[i] >= 2) return i;
        }
        return -1;
    }
}