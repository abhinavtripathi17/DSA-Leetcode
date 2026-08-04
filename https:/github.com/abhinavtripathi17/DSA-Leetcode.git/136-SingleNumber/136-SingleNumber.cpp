// Last updated: 8/4/2026, 7:21:06 PM
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            ans ^= nums[i];
        }
        return ans;
    }
};