// Last updated: 8/4/2026, 7:17:34 PM
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int counter = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                nums[counter] = nums[i];
                counter++;
            }
        }
        for(int i=counter;i<n;i++){
            nums[i] = 0;
        }
    }
};