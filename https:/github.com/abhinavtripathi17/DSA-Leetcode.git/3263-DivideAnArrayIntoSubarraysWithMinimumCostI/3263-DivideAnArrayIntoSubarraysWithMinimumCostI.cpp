// Last updated: 8/4/2026, 12:37:04 PM
class Solution {
public:
    int minimumCost(vector<int>& nums) {
        sort(nums.begin()+1 , nums.end());

        return nums[0] + nums[1] + nums[2];
    }
};