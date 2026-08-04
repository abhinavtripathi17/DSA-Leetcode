// Last updated: 8/4/2026, 12:35:30 PM
class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int n = nums.size();
        int l = 0;
        int r = 2;
        int count = 0;
        while(r < n){
            int sum = nums[l] + nums[r];
            if (2 * sum == nums[r-1]) count++;

            l++;
            r++;
        }
        return count;
    }
};