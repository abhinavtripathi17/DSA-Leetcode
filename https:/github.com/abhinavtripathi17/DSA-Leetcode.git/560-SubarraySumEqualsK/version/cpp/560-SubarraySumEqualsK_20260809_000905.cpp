// Last updated: 8/9/2026, 12:09:05 AM
// prefix sum property
1class Solution {
2public:
3    int subarraySum(vector<int>& nums, int k) {
4        int n = nums.size();
5
6        map<int , int>mpp;
7        int sum = 0;
8        mpp[0]++;
9        int cnt = 0;
10
11        for(int i = 0 ; i < n ; i++){
12            sum += nums[i];
13            if(mpp.find(sum-k) != mpp.end()){
14                cnt += mpp[sum - k];
15            }
16
17            mpp[sum]++;
18        }
19
20        return cnt;
21    }
22};