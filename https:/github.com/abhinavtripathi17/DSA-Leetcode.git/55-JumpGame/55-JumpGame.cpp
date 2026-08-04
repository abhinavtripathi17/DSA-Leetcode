// Last updated: 8/4/2026, 7:24:19 PM
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int maxIdx = 0;

        for(int i = 0 ; i < n ; i++){
            if(i > maxIdx) return false;

            maxIdx = max(maxIdx , i + nums[i]);
            if(i+nums[i] >= n) return true;


        }
        return true;
    }
};