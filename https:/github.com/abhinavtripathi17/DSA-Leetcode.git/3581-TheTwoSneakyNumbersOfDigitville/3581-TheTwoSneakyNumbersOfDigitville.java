// Last updated: 8/4/2026, 12:35:59 PM
class Solution {
    public int[] getSneakyNumbers(int[] nums) {     
        int[] arr=new int[2];                          
        int j = 0;
        Arrays.sort(nums);                      
        for(int i=0;i<nums.length-1;i++){
          if(nums[i]==nums[i+1]){
            arr[j] = nums[i];
            j++;
          }
        }
        return arr;
    }
}