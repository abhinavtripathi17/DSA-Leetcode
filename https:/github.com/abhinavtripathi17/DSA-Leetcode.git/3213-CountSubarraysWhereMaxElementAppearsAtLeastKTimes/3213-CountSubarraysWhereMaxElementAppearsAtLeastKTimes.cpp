// Last updated: 8/4/2026, 12:37:17 PM
class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        long long a = countSubarraysless(nums ,k);
        long long b = (long long)n*(n+1)/2;
        return b-a;
    }
    long long countSubarraysless(vector<int>& nums , int k){
        int maxi = *max_element(nums.begin() , nums.end());
        int l = 0 , r = 0 , cnt = 0;
        long ans = 0;

        while(r < nums.size()){
            if(nums[r] == maxi){
                cnt++;
            }
            while(cnt >= k){
                if(nums[l] == maxi) cnt--;
                l++;
            }
            if(cnt < k){
                ans += r - l + 1;
            }
            r++;
        }
        return ans;
    }
};