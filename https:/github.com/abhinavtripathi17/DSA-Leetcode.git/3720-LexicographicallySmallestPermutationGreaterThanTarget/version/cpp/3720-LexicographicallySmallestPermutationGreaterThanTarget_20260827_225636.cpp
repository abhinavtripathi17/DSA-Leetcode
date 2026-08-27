// Last updated: 8/27/2026, 10:56:36 PM
1class Solution {
2public:
3    string ans = "";
4    string lexGreaterPermutation(string s, string target) {
5        int n = s.length();
6        vector<int>freq(26);
7        for(int i = 0 ; i < n ; i++){
8            freq[s[i] - 'a']++;
9        }
10        solve("" , freq , target , 0 , false);
11        return ans;
12    }
13
14    bool solve(string curr , vector<int>&freq , string target , int i , bool greater){
15        if(i == target.length()){
16            if(greater){
17                ans = curr;
18                return true;
19            }
20            return false;
21        }
22
23        for(char ch = 'a' ; ch <= 'z' ; ch++){
24            if(freq[ch - 'a'] == 0) continue;
25            if(greater == false && ch < target[i]) continue;
26
27            curr.push_back(ch);
28            freq[ch-'a']--;
29
30            bool isGreater = greater || ch > target[i];
31
32            if(solve(curr , freq , target , i+1 , isGreater)){
33                return true;
34            }
35
36            curr.pop_back();
37            freq[ch - 'a']++;
38        }
39
40        return false;
41    }
42};