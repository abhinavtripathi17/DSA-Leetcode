// Last updated: 8/4/2026, 7:11:43 PM
class Solution {
    public int minEatingSpeed(int[] piles, int h) {
        int n = piles.length;
        int low = 1;
        int high = 0;
        for(int i = 0 ; i < n ; i++){
            if(piles[i] > high){
                high = piles[i];
            }
        }
        int ans = 0;

        while(low <= high){
            int mid = (low + high) / 2;
            double hrs = isFeasible(piles , mid);
            if(hrs <= h){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }

    double isFeasible(int arr[] , int k){
        int n = arr.length;
        double hours = 0;
        for(int i = 0 ; i < n ; i++){
            hours += Math.ceil(arr[i] /(double) k);
        }
        return hours;
    }
}