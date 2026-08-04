// Last updated: 8/4/2026, 7:19:59 PM
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        map<int , int>mpp;
        vector<int>ans;
        for(int i = 0 ; i < n ; i++){
            int ele = nums[i];
            int req = target - ele;

            if(mpp.find(req) != mpp.end()){
                ans.push_back(mpp[req]+1);
                ans.push_back(i+1);
            }
            mpp[ele] = i;
        }
        return ans;
    }
};