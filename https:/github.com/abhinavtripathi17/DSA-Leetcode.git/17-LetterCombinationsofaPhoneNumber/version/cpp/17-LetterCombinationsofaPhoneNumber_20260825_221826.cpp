// Last updated: 8/25/2026, 10:18:26 PM
1class Solution {
2public:
3    vector<string>ans;
4    vector<string> letterCombinations(string digits) {
5        
6        int n = digits.length();
7        if(n == 0) return {};
8
9        solve(0 , digits , "");
10
11        return ans;
12    }
13
14    void solve(int i , string &digits , string curr){
15        if(i == digits.size()){
16            ans.push_back(curr);
17            return;
18        }
19
20        vector<string>keypad(10 , "");
21        keypad[2] = "abc";
22        keypad[3] = "def";
23        keypad[4] = "ghi";
24        keypad[5] = "jkl";
25        keypad[6] = "mno";
26        keypad[7] = "pqrs";
27        keypad[8] = "tuv";
28        keypad[9] = "wxyz";
29
30        string letters = keypad[digits[i] - '0'];
31        for(char ch : letters){
32            curr += ch;
33            solve(i+1, digits , curr);
34
35            curr.pop_back();
36        }
37    }
38};