// Last updated: 8/4/2026, 7:25:35 PM
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int k = 1;
        for(int i = 1 ; i < n ; i++){
            if(nums[i] == nums[i-1]){
                continue;
            }
            nums[k] = nums[i];
            k++;
            
        }
        return k;
    }
};