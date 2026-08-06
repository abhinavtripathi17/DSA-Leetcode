// Last updated: 8/6/2026, 7:25:49 PM
1class Solution {
2public:
3    vector<int> goodIndices(vector<int>& nums, int k) {
4        int n = nums.size();
5        vector<int>inc(n , 0);
6        vector<int>dec(n , 0);
7
8        
9
10        for(int i = 1 ; i < n ; i++){
11            if(nums[i-1] >= nums[i]){
12                dec[i] = 1 + dec[i-1];
13            }
14        }
15
16        for(int i = n-2 ; i >= 0 ; i--){
17            if(nums[i+1] >= nums[i]){
18                inc[i] = 1 + inc[i+1];
19            }
20        }
21
22        vector<int>ans;
23
24        // for(int i = 0 ; i < n ; i++){
25        //     cout << dec[i] << endl;
26        // }
27
28        for(int i = k ; i < n - k ; i++){
29            if(inc[i+1] >= k-1 && dec[i-1] >= k-1){
30                ans.push_back(i);
31            }
32        }
33
34        return ans;
35    }
36};