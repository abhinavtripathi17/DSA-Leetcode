// Last updated: 11/22/2026, 4:53:26 PM
1class Solution {
2public:
3    int countDominantElements(vector<int>& nums) {
4        int n = nums.size();
5        if(n == 1) return 1;
6
7        int cnt = 0;
8        if(nums[0] >= nums[1]) cnt++;
9        if(nums[n-1] >= nums[n-2]) cnt++;
10        for(int i = 1 ; i < n-1 ; i++){
11            if(((double)nums[i-1] + nums[i+1])/2 <= (double)nums[i]){
12                cnt++;
13            }
14        }
15        return cnt;
16    }
17};