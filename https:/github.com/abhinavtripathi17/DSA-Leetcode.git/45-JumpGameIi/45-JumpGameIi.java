// Last updated: 8/4/2026, 7:24:49 PM
class Solution {
    public int jump(int[] nums) {
      int n = nums.length;
        int maxi = 0;
        int jumps = 0;
        int r = 0;

        for(int i = 0 ; i < n-1; i++){

            maxi = Math.max(i + nums[i] , maxi);

            if(i == r){
                jumps++;
                r = maxi;

                if(r >= n-1) return jumps;
            }

        }
        return 0;
        
    }
}