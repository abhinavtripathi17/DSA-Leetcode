// Last updated: 8/4/2026, 7:10:59 PM
class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int a = numSubarraywithSumless(nums ,  goal);
        int b = numSubarraywithSumless(nums ,  goal-1);
        return a - b;
    }
    int numSubarraywithSumless(vector<int>& nums , int goal){
        int l = 0 , r = 0 , sum = 0 , cnt = 0 ;
        int n = nums.size();
        if(goal < 0) return 0;

        while(r < n){
            sum = sum + nums[r];

            while(sum > goal){
                sum = sum - nums[l];
                l++;
            }
            cnt = cnt + (r - l + 1);
            r++;
        }
        return cnt;
    }
};