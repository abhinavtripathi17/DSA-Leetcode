// Last updated: 9/20/2026, 5:10:24 PM
1class Solution {
2public:
3    int reverseDegree(string s) {
4        int cnt[27];
5        int j = 1;
6        for(int i = 26 ; i >= 1 ; i--){
7            cnt[j] = i;
8            j++;
9        }
10        int ans = 0;
11        for(int i = 0 ; i < s.length() ; i++){
12            ans += (cnt[s[i] - 'a' + 1])*(i+1);
13        }
14        return ans;
15    }
16};