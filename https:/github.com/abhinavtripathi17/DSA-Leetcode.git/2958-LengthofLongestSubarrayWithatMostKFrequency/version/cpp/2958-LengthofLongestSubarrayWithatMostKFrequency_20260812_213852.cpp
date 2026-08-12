// Last updated: 8/12/2026, 9:38:52 PM
1class Solution {
2public:
3    int maxSubarrayLength(vector<int>& nums, int k) {
4        const int n=nums.size();
5        int cnt=0;
6        unordered_map<int, int> freq;//1 <= nums[i] <= 10^9
7        freq.reserve(n);
8        for (int l=0, r=0; r<n; r++){
9            int x=nums[r];
10            auto it=freq.find(x);
11            int& f=(it==freq.end())?freq[x]=1:++(it->second);
12            while (f>k)
13                freq[nums[l++]]--;
14        
15            cnt=max(cnt,r-l+1);// max len
16        }
17        return cnt;
18    }
19};
20
21
22auto init = []() {
23    ios::sync_with_stdio(0);
24    cin.tie(0);
25    cout.tie(0);
26    return 'c';
27}();