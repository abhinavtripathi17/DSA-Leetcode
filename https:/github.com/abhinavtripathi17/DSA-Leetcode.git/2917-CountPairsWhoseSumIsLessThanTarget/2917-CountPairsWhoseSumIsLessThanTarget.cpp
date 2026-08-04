// Last updated: 8/4/2026, 12:37:36 PM
class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int n = nums.size();
        int count = 0;

        sort(nums.begin(),nums.end());

        for(int i = 0; i<n-1; i++){
            int low = i+1, high = n-1;
            while(low <= high){
                int mid = (low + high) / 2;

                if(nums[i] + nums[mid] < target){
                    count += (mid - low + 1);
                    low = mid + 1;
                }
                else{
                    high = mid - 1;
                }
            }
        }
        return count;
    }
};