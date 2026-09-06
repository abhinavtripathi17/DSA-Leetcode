// Last updated: 9/6/2026, 2:23:57 PM
1class Solution {
2public:
3    int firstStableIndex(vector<int>& nums, int k) {
4        int n = nums.size();
5
6        vector<int>minP(n , 0);
7        vector<int>maxP(n , 0);
8        int maxi = nums[0];
9        int mini = nums[n-1];
10        maxP[0] = nums[0];
11        minP[n-1] = nums[n-1];
12
13        for(int i = 1 ; i < n ; i++){
14            if(nums[i] > maxi){
15                maxi = nums[i];
16            }
17            maxP[i] = maxi;
18        }
19        for(int i = n-2 ; i >= 0 ; i--){
20            if(nums[i] < mini){
21                mini = nums[i];
22            }
23            minP[i] = mini;
24        }
25
26        int idx = -1;
27
28        for(int i = 0 ; i < n ; i++){
29            if(maxP[i] - minP[i] <= k){
30                idx = i;
31                k = maxP[i] - minP[i];
32                break;
33            }
34        }
35        
36        return idx;
37    }
38};