// Last updated: 8/4/2026, 7:15:07 PM
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int cnt = 0 ;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            int sum = 0;
            for(int j = i ; j < n ; j++){
                sum += nums[j];

                if(sum == k) cnt++;
            }
        }
        return cnt;
    }
};