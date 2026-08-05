// Last updated: 8/5/2026, 7:40:58 PM
1class Solution {
2public:
3    int nextGreaterElement(int n) {
4        string s = to_string(n);
5        int len = s.length();
6
7        int idx = -1;
8        for(int i = len-2 ; i >= 0 ; i--){
9            if(s[i] < s[i+1]){
10                idx = i;
11                break;
12            }
13        }
14
15        if(idx == -1) return -1;
16
17        for(int i = len-1 ; i >= 0 ; i--){
18            if(s[i] > s[idx]){
19                swap(s[i] , s[idx]);
20                break;
21            }
22        }
23
24        // cout << s;
25
26        reverse(s.begin() + idx + 1 , s.end());
27
28        long long nextNum = stoll(s);
29        if(nextNum > INT_MAX) return -1; 
30        return nextNum;
31        
32    }
33};