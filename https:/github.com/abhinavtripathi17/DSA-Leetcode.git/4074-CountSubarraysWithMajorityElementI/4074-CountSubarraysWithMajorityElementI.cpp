// Last updated: 8/4/2026, 12:33:42 PM
class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int n = nums.size();

        int ans = 0;
        
        for(int i = 0 ; i < n ; i++){
            int cnt = 0;
            for(int j = i ; j < n ; j++){
                if(nums[j] == target) cnt++;

                if(2*cnt > j-i+1){
                    ans++;
                }
            }
        }

        return ans;
    }
};