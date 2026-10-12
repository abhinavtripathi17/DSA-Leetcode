// Last updated: 10/12/2026, 7:29:34 PM
1class Solution {
2public:
3    // to check valid parenthesis;
4    bool isValid(string& s) {
5        int n = s.length();
6        int cnt = 0;
7
8        for(int i = 0 ; i < n ; i++){
9            if(cnt < 0){
10                return false;
11            }
12            if(s[i] == '('){
13                cnt++;
14            }
15            else if(s[i] == ')'){
16                cnt--;
17            }
18            else{
19                
20            }
21        }
22        if(cnt > 0){
23            return false;
24        }
25        return true;
26    }
27
28    void solve(string& s, int i, vector<string>& res, int n, string &temp) {
29        if(i == n){
30            int balance = 0;
31            bool valid = true;
32             
33            for(int i = 0 ; i < temp.length() ; i++){
34                if(temp[i] == '('){
35                    balance++;
36                } 
37                else if(temp[i] == ')'){
38                    balance--;
39                      if(balance < 0){
40                        valid = false;
41                        break;
42                    }
43                }
44            }
45         
46            if(valid && isValid(temp)){
47                if(res.empty() || temp.length() > res[0].length()){
48                    res.clear();
49                    res.push_back(temp);
50                }
51                else if(temp.length() == res[0].length()){
52                    if(find(res.begin(), res.end(), temp) == res.end()){
53                        res.push_back(temp);
54                    }
55                }
56            }
57             return;
58        }
59         
60        if(s[i] == '(' || s[i] == ')'){
61            temp.push_back(s[i]);
62            solve(s, i + 1, res, n, temp);
63            temp.pop_back();
64            solve(s, i + 1, res, n, temp);
65        }
66        else{
67            temp.push_back(s[i]);
68            solve(s, i + 1, res, n, temp);
69            temp.pop_back();
70        }
71    }
72
73    vector<string> removeInvalidParentheses(string s) {
74        int n = s.length();
75        vector<string> res;
76        string temp = "";
77
78        solve(s, 0, res, n, temp);
79        return res;
80    }
81};