// Last updated: 8/4/2026, 7:19:40 PM
class Solution {
    public void rotate(int[] nums, int k) {
        int n = nums.length;
        k = k % n;
        int l,r;
        
        l = 0 ; r = n-1;
        while(l < r){
            int temp = nums[r];
            nums[r] = nums[l];
            nums[l] = temp;
            l++;
            r--;
        }

        l = 0 ; r = k-1;
        while(l < r){
            int temp = nums[r];
            nums[r] = nums[l];
            nums[l] = temp;
            l++;
            r--;
        }

        l = k ; r = n-1;
        while(l < r){
            int temp = nums[r];
            nums[r] = nums[l];
            nums[l] = temp;
            l++;
            r--;
        }

    }
}