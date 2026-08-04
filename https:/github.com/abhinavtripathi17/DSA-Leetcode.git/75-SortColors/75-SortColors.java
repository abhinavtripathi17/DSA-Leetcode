// Last updated: 8/4/2026, 7:23:24 PM
class Solution {
    public void sortColors(int[] nums) {
        //dutch national flag algo

        int i = 0 , j = 0 , k = nums.length - 1;

        while(j <= k){
            if(nums[j] == 0){
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                j++;
                i++;
            }
            else if(nums[j] == 2){
                int temp = nums[j];
                nums[j] = nums[k];
                nums[k] = temp;
                k--;
            }
            else{
                j++;
            }
        }
    }
}