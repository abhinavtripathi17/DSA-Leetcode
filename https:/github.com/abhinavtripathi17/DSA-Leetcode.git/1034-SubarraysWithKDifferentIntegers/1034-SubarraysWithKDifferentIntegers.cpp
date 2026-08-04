// Last updated: 8/4/2026, 7:10:12 PM
class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
      int a =  subarraylessthank(nums , k);
      int b =  subarraylessthank(nums , k-1);
      return a - b;

    }
    int subarraylessthank(vector<int>& nums , int k){
        int n = nums.size();
        int l = 0 , r = 0 , cnt = 0;

        unordered_map<int,int>mpp;

        while(r < n){
            mpp[nums[r]]++;

            while(mpp.size() > k){
                mpp[nums[l]]--;

                if(mpp[nums[l]] == 0){
                    mpp.erase(nums[l]);
                }
                l++;
            }
            cnt += r - l + 1;
            r++;
        }
        return cnt;
    }
};