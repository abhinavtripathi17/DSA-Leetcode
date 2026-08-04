// Last updated: 8/4/2026, 12:43:33 PM
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>ans(2*n , 0);
        int k = 0 ;
        for(int i = 0 ; i < n ; i++){
            ans[k] = nums[i];
            k++;
            ans[k] = nums[i+n];
            k++;
        }
        return ans;
    }
};