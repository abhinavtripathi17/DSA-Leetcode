// Last updated: 8/4/2026, 12:33:29 PM
class Solution {
public:
    int minimumK(vector<int>& nums) {
        int low = 1;
        int high = max(
            *max_element(nums.begin(), nums.end()),
            (int)nums.size()
        );
        int ans = high;
        while(low <= high){
            int mid = (low + high)/2;

            if(isPossible(nums , mid)){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }

    bool isPossible(vector<int>&nums , int k){
        int n = nums.size();
        long long x = 1LL*k*k;
        long long cnt = 0;
        for(int i = 0 ; i < n ; i++){
            int num = nums[i];
            while(num > 0){
                num = num - k;
                cnt++;
                if(cnt > x){
                return false;
            }
            }
            
        }
        return true;
    }
};