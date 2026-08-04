// Last updated: 8/4/2026, 12:38:35 PM
class Solution {
    public long repairCars(int[] ranks, int cars) {
        long low = 1;
        long high = 1L * Arrays.stream(ranks).min().getAsInt() * cars * cars;
        long ans = -1;

        while(low <= high){
            long mid = low + (high - low) / 2 ;
            if(is_Minimumtime(ranks, mid , cars)){
                ans = mid;
                high = mid - 1;
        }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
    public static boolean is_Minimumtime(int[] ranks, long mid ,int cars ){
        long ans = 0;
        for(int i = 0 ; i < ranks.length ; i++){
            ans += Math.sqrt(mid / ranks[i]);
        }
        return ans >= cars;
    }
}