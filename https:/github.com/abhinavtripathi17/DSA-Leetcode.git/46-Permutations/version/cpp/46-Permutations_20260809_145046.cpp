// Last updated: 8/9/2026, 2:50:46 PM
1class Solution {
2public:
3    vector<vector<int>> permute(vector<int>& nums) {
4        int n = nums.size();
5        vector<vector<int>>res;
6        solve(0 , nums , res);
7        return res;
8    }
9
10    void solve(int i , vector<int>&nums , vector<vector<int>>&res){
11        if(i == nums.size()){
12            res.push_back(nums);
13            return;
14        }
15
16        for(int idx = i ; idx < nums.size() ; idx++){
17            swap(nums[idx] , nums[i]);
18            solve(i+1, nums, res);
19            swap(nums[idx] , nums[i]);
20        }
21    }
22};