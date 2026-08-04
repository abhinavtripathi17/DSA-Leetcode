// Last updated: 8/4/2026, 7:22:55 PM
class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int arr[] = new int [m+n];
        int i = 0 ,  j = 0 , k = 0;

        while(i < m && j < n){
            if(nums1[i] < nums2[j]){
                arr[k] = nums1[i];
                i++;
                k++;
            }
            else{
                arr[k] = nums2[j];
                j++;
                k++;
            }
        }
        while(i < m){
            arr[k] = nums1[i];
            i++;
            k++;
        }
        while(j < n){
            arr[k] = nums2[j];
            j++;
            k++;
        }
        for(int a = 0 ; a < arr.length ; a++){
            nums1[a] = arr[a];
        }
    }
}