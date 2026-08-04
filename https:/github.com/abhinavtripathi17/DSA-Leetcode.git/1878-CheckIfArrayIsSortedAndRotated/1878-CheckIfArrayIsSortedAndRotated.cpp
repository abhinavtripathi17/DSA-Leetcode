// Last updated: 8/4/2026, 12:42:08 PM
class Solution {
public:
    bool check(vector<int>& nums) {
        int cnt = 0;
        int n = nums.size();

        if(nums[0] < nums[n-1]) cnt++;

        for(int i = 0 ; i < n-1 ; i++){
            if(nums[i] > nums[i+1]){
                cnt++;
            }
        }
        if(cnt <= 1) return true;
        else return false;
    }
};