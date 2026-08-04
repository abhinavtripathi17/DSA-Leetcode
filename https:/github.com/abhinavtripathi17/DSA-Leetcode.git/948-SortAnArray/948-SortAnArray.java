// Last updated: 8/4/2026, 7:11:17 PM
class Solution {
    public int[] sortArray(int[] nums) {
        mergeSort(nums, 0 ,nums.length - 1);
        return nums;
    }
    public void mergeSort(int[] arr ,int low ,int high){
        if(low == high) return ;
        int mid = (low + high)/2;
        mergeSort(arr , low , mid);
        mergeSort(arr , mid+1 , high);
        merge(arr, low , mid , high);

    }
    public void merge(int[] arr , int low , int mid , int high){
        int n = high - low + 1;
        int temp[] = new int [n];

        int left = low;
        int right = mid + 1;
        int i = 0;

        while(left <= mid && right <= high){
            if(arr[left] < arr[right]){
                temp[i] = arr[left];
                i++;
                left++;
            }
            else{
                temp[i] = arr[right];
                i++;
                right++;
            }
        }
        while(left <= mid){
            temp[i] = arr[left];
            left++;
            i++;
        }
        while(right <= high){
            temp[i] = arr[right];
            right++;
            i++;
        }
        for(int k = 0 ; k < n ; k++){
            arr[k + low] = temp[k];
        }
    }
}