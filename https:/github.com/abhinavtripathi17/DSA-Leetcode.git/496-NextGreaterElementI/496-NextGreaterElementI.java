// Last updated: 8/4/2026, 7:15:45 PM
class Solution {
    public int[] nextGreaterElement(int[] nums1, int[] nums2) {
        int arr[] = new int [nums1.length];
        
        for(int i = 0 ; i < nums1.length ; i++){
            int req_idx = -1;
            for(int j = 0 ; j < nums2.length ; j++){
                if(nums2[j] == nums1[i]){
                    req_idx = j;
                    break;
                }
            }
            arr[i] = -1;
            for(int j = req_idx + 1 ; j < nums2.length ; j++){
                if(nums2[j] > nums1[i]){
                    arr[i] = nums2[j];
                    break;
                }
            }
        }
        return arr;
    }
}