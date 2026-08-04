// Last updated: 8/4/2026, 12:45:23 PM
class Solution {
    public int maximumCandies(int[] candies, long k) {
        int n = candies.length;
        int low = 1;
        int high = maxi(candies);
        int ans = 0;

        if (isSum(candies) < k)
            return ans;

        while (low <= high) {
            int mid = (low + high) / 2;
            if (isPossibe_to_serve(candies, mid, k)) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return ans;
    }

    public boolean isPossibe_to_serve(int[] candies , int mid , long k) {
        long sum = 0;
        for(int i = 0 ; i < candies.length ; i++){
            if(candies[i] >= mid){
                sum += candies[i]/mid;
            }    
        }
        if(sum >= k){
            return true;
        }
        else{
            return false;
        }

    }

    public int maxi(int[] candies) {
        int maxx = 0;
        for (int i = 0; i < candies.length; i++) {
            maxx = Math.max(candies[i], maxx);
        }
        return maxx;
    }

    public long isSum(int[] candies) {
        long s = 0;
        for (int i = 0; i < candies.length; i++) {
            s += candies[i];
        }
        return s;
    }
}