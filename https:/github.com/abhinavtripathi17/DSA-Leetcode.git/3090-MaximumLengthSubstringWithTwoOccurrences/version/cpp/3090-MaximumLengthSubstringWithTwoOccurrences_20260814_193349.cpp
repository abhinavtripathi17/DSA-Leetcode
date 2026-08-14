// Last updated: 8/14/2026, 7:33:49 PM
1class Solution {
2public:
3    int maximumLengthSubstring(string s) {
4        int n = s.length();
5        int l = 0 , r = 0;
6        unordered_map<char , int>mpp;
7        int ans = 0;
8
9        while(r < n){
10            mpp[s[r]]++;
11            while(mpp[s[r]] > 2){
12                mpp[s[l]]--;
13                l++;
14            }
15            ans = max(ans , r-l+1);
16            r++;
17        }
18
19        return ans;
20
21    }
22};