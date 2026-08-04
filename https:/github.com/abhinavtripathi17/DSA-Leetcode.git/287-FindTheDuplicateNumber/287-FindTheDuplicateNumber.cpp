// Last updated: 8/4/2026, 7:17:31 PM
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        map<int , int>mpp;

        for(int i = 0 ; i < n ; i++){
            if(mpp.find(nums[i]) != mpp.end()){
                return nums[i];
            }
            mpp[nums[i]]++;
        }
        return -1;
    }
};