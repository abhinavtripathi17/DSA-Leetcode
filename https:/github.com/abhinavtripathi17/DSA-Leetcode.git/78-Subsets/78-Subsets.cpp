// Last updated: 8/4/2026, 7:23:21 PM
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        int subset = 1 << n;
        vector<vector<int>>result = {{}};

        for(int i = 1 ; i < subset ; i++){
            vector<int>sub_sets = {};
            for(int j = 0 ; j < n ; j++){
                if(i & (1 << j)){
                    sub_sets.push_back(nums[j]);
                }
            }
            result.push_back(sub_sets);
        }
        return result;
    }
};