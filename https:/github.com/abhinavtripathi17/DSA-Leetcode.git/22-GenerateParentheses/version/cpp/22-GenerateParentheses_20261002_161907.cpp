// Last updated: 10/2/2026, 4:19:07 PM
1class Solution {
2public:
3    vector<string> generateParenthesis(int n) {
4        vector<string>ans;
5        solve(0 , 0 , n , "" , ans);
6        return ans;
7    }
8
9    void solve(int op , int cl , int n , string s , vector<string>&ans){
10        if(op == n && cl == n){
11            ans.push_back(s);
12            return;
13        }
14
15        if(op < n){
16            solve(op+1 , cl , n ,s+"(" , ans);
17        }
18        if(cl < op){
19            solve(op , cl+1 , n ,s+")" , ans);
20        }
21        // s.pop_back();
22    }
23};