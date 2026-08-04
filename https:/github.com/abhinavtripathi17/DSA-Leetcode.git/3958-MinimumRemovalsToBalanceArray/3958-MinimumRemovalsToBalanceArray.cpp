// Last updated: 8/4/2026, 12:34:09 PM
class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin() , nums.end());

        int ans = 0;
        int l = 0 , r = 0;
        long long maxi = 0;
        long long mini = 0;

        while(r < n){
            mini = nums[l];
            maxi = nums[r];
            
            if(mini * k < maxi){
                l++;
                
            }
            if(mini*k >= maxi){
                ans = max(r - l + 1 , ans);
            }
            r++;
        }
        return n - ans;
        
    }
};