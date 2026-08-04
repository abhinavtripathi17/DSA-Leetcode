// Last updated: 8/4/2026, 7:15:21 PM
class Solution {
    public int singleNonDuplicate(int[] nums) {
        
        if(nums.length==1){
            return nums[0];
        }
        int low=0;
        int high=nums.length-1;

        while(low<high){
            int mid=low+(high-low)/2;
            //System.out.print(nums[mid]+" "+mid+" ");

            // if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]){
            //     return nums[mid];
            // }
            if(mid%2==1){
                mid--;
            }
            if(nums[mid]==nums[mid+1]){
                low=mid+2;
            }
            else{
                high=mid;
            }
        }
        //System.out.print("out");
        return nums[low];
    }
}