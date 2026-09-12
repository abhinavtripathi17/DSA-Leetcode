// Last updated: 9/12/2026, 9:21:19 PM
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
14            if(it.second.size() >= 3){
15                bool isT = true;
16                for (int i = 2; i < it.second.size(); i++) {
17                    if (it.second[i-1] - it.second[i-2] !=
18                        it.second[i] - it.second[i-1]) {
19                        isT = false;
20                        break;
21                    }
22                }
23
24                if(isT) cnt++;
25            }
26        }
27
28        return cnt;
29    }
30};