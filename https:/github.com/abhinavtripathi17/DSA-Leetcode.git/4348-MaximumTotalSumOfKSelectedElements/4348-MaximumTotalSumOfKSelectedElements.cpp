// Last updated: 8/4/2026, 12:32:52 PM
class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        int n = nums.size();
        sort(nums.begin() , nums.end());
        
        long long sum = 0;
        
        for(int i = n-1 ; i >= 0 ; i--){
            if(k > 0 && mul > 1){
                sum += 1LL*mul*nums[i];
                mul--;
            }
            else if(k > 0 && mul <= 1){
                sum += nums[i];
            }
            k--;
        }

        return sum;
    }
};