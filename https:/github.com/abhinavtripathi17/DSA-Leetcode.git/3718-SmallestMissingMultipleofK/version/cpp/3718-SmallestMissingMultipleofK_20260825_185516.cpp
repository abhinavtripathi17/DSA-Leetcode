// Last updated: 8/25/2026, 6:55:16 PM
1class Solution {
2public:
3    int missingMultiple(vector<int>& nums, int k) {
4        int n = nums.size();
5        set<int>st;
6        for(int num : nums){
7            st.insert(num);
8        }
9        int res = k;
10        for(int i = 1 ; i <= 101 ; i++){
11            if(st.find(k*i) == st.end()){
12                res = k*i;
13                break;
14            }
15        }
16        return res;
17    }
18};