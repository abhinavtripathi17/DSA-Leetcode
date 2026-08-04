// Last updated: 8/4/2026, 12:33:08 PM
class Solution {
public:
    int countValidSubarrays(vector<int>& nums, int x) {
       int n = nums.size();

       vector<long long>prefixSum(n+1 , 0);
        for(int i = 1 ; i <= n ; i++){
            prefixSum[i] = prefixSum[i-1]+nums[i-1];
        }
        int ans = 0;

        for(int i = 0 ; i < n ; i++){
            for(int j = i ; j < n ; j++){
                long long sum = prefixSum[j+1] - prefixSum[i];
                if(firstDigit(sum) == x && lastDigit(sum) == x){
                    ans++;
                }
            }
        }

        return ans;
    }
    long long firstDigit(long long n){
        while(n > 9){
            n = n/10;
        }
         return n;
    }
    long long lastDigit(long long n){
        int digit = n%10;
        return digit;
    }
};