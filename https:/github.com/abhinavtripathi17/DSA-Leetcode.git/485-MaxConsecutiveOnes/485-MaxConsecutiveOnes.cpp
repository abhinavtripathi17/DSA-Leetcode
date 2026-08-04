// Last updated: 8/4/2026, 7:15:53 PM
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int ones = 0;
        int maxi = 0;

        for(int i = 0 ; i < n ; i++){
            if(nums[i] == 1){
                ones++;
                maxi = max(maxi , ones);
            }
            else{
                ones = 0;
            }
        }
        return maxi;
    }
};