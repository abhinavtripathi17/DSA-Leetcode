// Last updated: 8/4/2026, 7:16:33 PM
class Solution {
public:

    int max_subarray(vector<int> &nums, int max_sum){
        int subarray = 1 , subarray_sum = 0;
        for(int i = 0; i < nums.size(); i++){
            if(subarray_sum + nums[i] <= max_sum){
                subarray_sum += nums[i];
            }
            else{
                subarray++;
                subarray_sum = nums[i];
            }
        }
        return subarray;
    }
    
    int splitArray(vector<int>& nums, int k) {
        
        int low = *max_element(nums.begin() , nums.end());
        int high = accumulate(nums.begin() , nums.end(),0);

        while(low <= high){
            int mid = low + (high - low) / 2;

            if(max_subarray(nums , mid) > k){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return low ; 
        
    }
};