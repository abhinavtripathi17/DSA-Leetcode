// Last updated: 8/4/2026, 7:23:18 PM
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int l = 0 , mid = 0 , r = n-1;

        while(mid <= r){
            if(nums[mid] == 0){
                swap(nums[l] , nums[mid]);
                l++;
                mid++;
            }
            else if(nums[mid] == 1){
                mid++;
            }
            else{
                swap(nums[r] , nums[mid]);
                r--;
            }

        }
    }
};