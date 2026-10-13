// Last updated: 10/13/2026, 6:47:32 PM
1class Solution {
2public:
3    long long maxAlternatingSum(vector<int>& nums) {
4        int n = nums.size();
5        for(int i = 0 ; i < n ; i++){
6            nums[i] = nums[i]* nums[i];
7        }
8
9        sort(nums.begin() , nums.end());
10        
11        long long a = 0;
12        long long b = 0;
13        int i = 0;
14
15        for(i = 0 ; i < n/2 ; i++){
16            b += nums[i];
17        }
18        for(i = n/2 ; i < n ; i++){
19            a += nums[i];
20        }
21        return a-b;
22    }
23};