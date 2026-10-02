// Last updated: 10/2/2026, 3:41:28 PM
1class Solution {
2public:
3    bool isValid(string s) {
4        int n = s.length();
5        stack<int>st;
6
7        for(int i = 0 ; i < n ; i++){
8            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
9                st.push(i);
10            }
11            else{
12                if(st.empty()) return false;
13                if((s[i] == ')' && s[st.top()] == '(' )|| (s[i] == '}' && s[st.top()] == '{' )|| (s[i] == ']' && s[st.top()] == '[')){
14                    st.pop();
15                }
16                else{
17                    return false;
18                }
19            }
20        }
21        return st.empty();
22    }
23};