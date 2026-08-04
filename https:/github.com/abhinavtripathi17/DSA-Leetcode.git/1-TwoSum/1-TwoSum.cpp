// Last updated: 8/4/2026, 7:26:56 PM
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        map<int,int>mpp;

        for(int i = 0 ; i < n ; i++){
            int curr = nums[i];
            int rem = target - nums[i];

            if(mpp.find(rem) != mpp.end()){
                return {mpp[rem] , i};
            }

            mpp[nums[i]] = i;
        }
        return {};
    }
};