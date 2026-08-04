// Last updated: 8/4/2026, 12:43:16 PM
1class Solution {
2public:
3    vector<int> findMissingElements(vector<int>& nums) {
4        int n = nums.size();
5        int mini = *min_element(nums.begin(), nums.end());
6        int maxi = *max_element(nums.begin() , nums.end());
7
8        set<int>st;
9        for(auto num : nums){
10            st.insert(num);
11        }
12
13        vector<int>ans;
14
15        for(int i = mini ; i <= maxi ; i++){
16            if(st.find(i) == st.end()){
17                ans.push_back(i);
18            }
19        }
20
21        return ans;
22    }
23};