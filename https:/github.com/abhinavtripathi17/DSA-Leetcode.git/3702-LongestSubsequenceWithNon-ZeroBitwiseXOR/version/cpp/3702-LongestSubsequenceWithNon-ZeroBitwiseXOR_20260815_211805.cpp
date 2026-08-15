// Last updated: 8/15/2026, 9:18:05 PM
1class Solution {
2public:
3    int longestSubsequence(vector<int>& nums) {
4        int n = nums.size();
5        int ans = 0;
6
7        int sum = 0;
8
9        for(int i = 0 ; i < n ; i++){
10            ans ^= nums[i];
11
12            if(sum <= 0){
13                sum += nums[i];
14            }
15        }
16
17        if(ans == 0 && sum == 0){
18            return 0;
19        }
20        else if(ans == 0){
21            return n-1;
22        }
23        else{
24            return n;
25        }
26    }
27};