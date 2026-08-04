// Last updated: 8/4/2026, 4:08:47 PM
1class Solution {
2public:
3    long long maxPairStrength(vector<int>& nums) {
4        int n = nums.size();
5        long long maxi = -1;
6
7        for(int i = 0 ; i < n ; i++){
8            for(int j = i+1 ; j < n ; j++){
9                long long gc = __gcd(nums[i] , nums[j]);
10                long long ans = 1LL*nums[i] * nums[j] / (gc*gc);
11                maxi = max(maxi , ans);
12            }
13        }
14
15        return maxi;
16    }
17};