// Last updated: 10/3/2026, 9:29:35 PM
1class Solution {
2public:
3    int longestValidParentheses(string s) {
4        int n = s.length();
5        stack<int>st;
6        st.push(-1);
7        int cnt = 0;
8
9        for(int i = 0 ; i < n ; i++){
10            if(!st.empty() && st.top() != -1 && s[st.top()] == '(' && s[i] == ')'){
11                st.pop();
12                cnt = max(cnt , i-st.top());
13            }
14
15            else{
16                st.push(i);
17            }
18        }
19
20        return cnt;
21    }
22};