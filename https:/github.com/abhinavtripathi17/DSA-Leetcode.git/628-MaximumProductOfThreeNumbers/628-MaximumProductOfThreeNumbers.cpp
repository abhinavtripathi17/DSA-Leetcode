// Last updated: 8/4/2026, 7:14:19 PM
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin() , nums.end());
        return max(nums[0]* nums[1]*nums[n-1] , nums[n-1]*nums[n-2]*nums[n-3]);

    }
};