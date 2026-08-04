// Last updated: 8/4/2026, 12:45:21 PM
class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int a = myfn(nums , k);
        int b = myfn(nums , k-1);
        return a - b;
    }
    int myfn(vector<int> & nums , int k){
        int l = 0 , r = 0 , sum = 0 , cnt = 0 ;
        int n = nums.size();
        if(k < 0) return 0;

        while(r < n){
            sum = sum + (nums[r]) % 2;

            while(sum > k){
                sum = sum -(nums[l]) % 2;
                l++;
            }
            cnt = cnt + (r - l + 1);
            r++;
        }
        return cnt;
    }
};