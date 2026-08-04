// Last updated: 8/4/2026, 7:11:06 PM
class Solution {
    public int[] sortArrayByParityII(int[] arr) {
        int n = arr.length;
        int i = 0 , j = 1;

        while(i < n && j < n){
            while(i < n && arr[i] % 2 == 0){
                i = i + 2;
            }
            while(j < n && arr[j] % 2 != 0){
                j = j + 2;
            }
            if(i < n && j < n){
                swap(arr , i , j);
            }
        }
        return arr;
    }
    public void swap(int arr[] , int i , int j){
        int temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
    }
}