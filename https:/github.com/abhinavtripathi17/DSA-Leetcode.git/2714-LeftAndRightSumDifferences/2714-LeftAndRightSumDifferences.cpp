// Last updated: 8/4/2026, 12:38:24 PM
class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int>leftSum(n , 0);
        vector<int>rightSum(n , 0);

        vector<int>ans(n , 0);
        if(n > 1 )
        leftSum[1] = nums[0];

        for(int i = 2 ; i < n ; i++){
            leftSum[i] = leftSum[i-1] + nums[i-1];
        }
        if(n > 1)
        rightSum[n-2] = nums[n-1];
        for(int i = n-3 ; i >= 0 ; i--){
            rightSum[i] = rightSum[i+1] + nums[i+1];
        }

        for(int i = 0 ; i < n ; i++){
            ans[i] = abs(leftSum[i] - rightSum[i]);
        }
        return ans;
    }
};