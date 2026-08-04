// Last updated: 8/4/2026, 12:35:12 PM
class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int n = nums.size();
        int ele = nums[0];
        int diff = 0 , maxdiff = 0;
        for(int i = 0 ; i < n ; i++){
            //diff = abs(ele - nums[i]);
            //ele = min(ele , nums[i]);
            //maxdiff = max(diff , maxdiff);
            int next_index = (i+1)%n;
            maxdiff = max(abs(nums[i] - nums[next_index]) , maxdiff);
        }
        return maxdiff;
    }
};