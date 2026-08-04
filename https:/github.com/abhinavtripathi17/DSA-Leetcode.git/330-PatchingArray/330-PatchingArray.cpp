// Last updated: 8/4/2026, 7:17:02 PM
class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
    long long miss = 1;  // Start with the smallest number we need to form
    int i = 0, patches = 0;
    
    while (miss <= n) {
        if (i < nums.size() && nums[i] <= miss) {
            // If the current number in the array can extend our range, use it
            miss += nums[i];
            i++;
        } else {
            // Otherwise, add `miss` itself to the array to extend the range
            miss += miss;
            patches++;
        }
    }
    
    return patches;

    }
};