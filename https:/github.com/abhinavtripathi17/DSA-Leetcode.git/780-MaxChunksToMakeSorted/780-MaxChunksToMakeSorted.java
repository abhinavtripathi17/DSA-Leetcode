// Last updated: 8/4/2026, 7:12:59 PM
class Solution {
    public int maxChunksToSorted(int[] arr) {
      int n = arr.length;
      int maxi = arr[0];  
      int cnt = 0;
      for(int i = 0 ; i < n ; i++){
        if(arr[i] > maxi){
            maxi = arr[i];
        }
        if(maxi == i){
            cnt++;
        }
      }
      return cnt;
    }
}