// Last updated: 8/4/2026, 7:10:25 PM
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
       int n = nums.size();

       map<int , int>mpp;
       int sum = 0;
       int ans = 0;
       mpp[sum] = 1;

       for(int i = 0 ; i < n ; i++){
        sum += nums[i];
        int rem = sum % k;
        if(rem < 0){
            rem += k;
        }
        
        if(mpp.find(rem) != mpp.end()){
            ans += mpp[rem];
            mpp[rem]++;
        }
        else{
            mpp[rem]++;
        }
       }
       return ans;
    }
};