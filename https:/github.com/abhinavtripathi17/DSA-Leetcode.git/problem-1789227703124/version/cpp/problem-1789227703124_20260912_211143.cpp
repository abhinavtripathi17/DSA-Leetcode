// Last updated: 9/12/2026, 9:11:43 PM
1class Solution {
2public:
3    int countSpecialIntegers(vector<int>& nums) {
4        int n = nums.size();
5        map<int , vector<int>>mpp;
6
7        for(int i = 0 ; i < n ; i++){
8            mpp[nums[i]].push_back(i);
9        }
10
11        int cnt = 0;
12
13        for(auto it : mpp){
14            if(it.second.size() == 3){
15                int i1 = it.second[0];
16                int i2 = it.second[1];
17                int i3 = it.second[2];
18
19                if(i2 - i1 == i3 - i2){
20                    cnt++;
21                }
22            }
23        }
24
25        return cnt;
26    }
27};