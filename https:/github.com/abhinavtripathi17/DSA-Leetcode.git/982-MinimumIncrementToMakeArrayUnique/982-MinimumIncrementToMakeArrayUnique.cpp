// Last updated: 8/4/2026, 7:10:48 PM
class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        int n = nums.size();
        int count = 0;
        int prevs = nums[0];
        for(int i = 1;i < n;i++){
            if(nums[i]<=prevs){
                count += prevs + 1 - nums[i];
                prevs += 1;
            }
            else{
                prevs = nums[i];
            }
        }
        
        
    return count;
    }
};