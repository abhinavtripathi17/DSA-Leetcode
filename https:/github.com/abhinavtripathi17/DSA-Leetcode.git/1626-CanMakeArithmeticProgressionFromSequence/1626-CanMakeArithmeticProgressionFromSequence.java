// Last updated: 8/4/2026, 12:43:18 PM
class Solution {
    public boolean canMakeArithmeticProgression(int[] arr) {
        Arrays.sort(arr);
        int n = arr.length;

        for(int i = 1 ; i < n-1 ; i++){
            if(arr[i-1] - arr[i] != arr[i] - arr[i+1]){
                return false;
            }
        }
        return true;
    }
}