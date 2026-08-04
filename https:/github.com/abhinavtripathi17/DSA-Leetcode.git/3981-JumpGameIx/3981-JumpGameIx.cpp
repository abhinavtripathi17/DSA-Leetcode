// Last updated: 8/4/2026, 12:33:55 PM
class Solution {
public:
    vector<int> maxValue(vector<int>& nums) {
        int n = nums.size();

        vector<int>prefMax(n , 0);
        vector<int>suffMin(n , 0);
        vector<int>ans(n , 0);

        prefMax[0] = nums[0];
        for(int i = 1 ; i < n ; i++){
            prefMax[i] = max(prefMax[i-1] , nums[i]);
        }

        suffMin[n-1] = nums[n-1];
        for(int i = n-2 ; i >= 0; i--){
            suffMin[i] = min(nums[i] , suffMin[i+1]);
        }

        ans[n-1] = prefMax[n-1];

        for(int i = n-2 ; i >= 0 ; i--){
            if(prefMax[i] > suffMin[i+1]){
                ans[i] = ans[i+1];
            }
            else{
                ans[i] = prefMax[i];
            }
        }
        return ans;
    }
};