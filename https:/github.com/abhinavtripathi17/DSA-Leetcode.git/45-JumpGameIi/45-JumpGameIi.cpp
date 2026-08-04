// Last updated: 8/4/2026, 7:24:43 PM
class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int jump = 0;
        int maxIdx = 0;
        int idx = 0;
        for(int i = 0 ; i < n-1 ; i++){
            if(i + nums[i] > maxIdx){
                maxIdx = i+nums[i];
            }
            if(idx == i){
                idx = maxIdx;
                jump++;
            }

        }
        return jump;
    }
};