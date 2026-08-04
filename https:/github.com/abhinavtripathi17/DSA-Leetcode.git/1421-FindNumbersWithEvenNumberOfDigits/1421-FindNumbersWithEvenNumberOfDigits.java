// Last updated: 8/4/2026, 12:44:42 PM
class Solution {
    public int findNumbers(int[] nums) {
        int n = nums.length;
        int ans = 0;
        for(int i = 0 ; i < n ; i++){
            int digit = nums[i];
            int cnt = 0;
            while(digit > 0){
                int rem = digit % 10;
                digit = digit/10;
                cnt++;
            }
            if(cnt % 2 == 0) ans++;
        }
        return ans;
    }
}