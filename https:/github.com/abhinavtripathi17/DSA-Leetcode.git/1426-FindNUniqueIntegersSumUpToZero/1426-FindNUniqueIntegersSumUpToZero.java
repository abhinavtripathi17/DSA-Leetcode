// Last updated: 8/4/2026, 12:44:37 PM
class Solution {
    public int[] sumZero(int n) {
        int arr[] = new int[n];
        int sum = 0;
        for(int i = 0 ; i < n-1 ; i++){
            arr[i] = i+1;
            sum += arr[i];
        }
        arr[n-1] = -sum;
        return arr;
    }
}