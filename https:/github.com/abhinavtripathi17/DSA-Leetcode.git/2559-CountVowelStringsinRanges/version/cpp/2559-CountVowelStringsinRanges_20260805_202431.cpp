// Last updated: 8/5/2026, 8:24:31 PM
1class Solution {
2public:
3    bool isVowel(char c){
4        if(c == 'a' || c == 'i' || c == 'e' || c == 'o' || c == 'u'){
5            return true;
6        }
7        return false;
8    }
9
10    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
11        int n = words.size();
12
13        vector<int>vowel(n);
14
15        //index whose string starts and ends with a vowel
16        for(int i = 0 ; i < n ; i++){
17            string s = words[i];
18            if(isVowel(s[0]) && isVowel(s[s.length()-1])){
19                vowel[i]++;
20            }
21        }
22
23        vector<int>prefix(n , 0);
24        prefix[0] = vowel[0];
25
26        for(int i = 1 ; i < n ; i++){
27            prefix[i] = prefix[i-1] + vowel[i];
28        }
29
30        //check for each query in O(1)
31
32        vector<int>res;
33
34        for(auto it : queries){
35            int start = it[0];
36            int end = it[1];
37
38            int ans = start > 0 ? prefix[end] - prefix[start-1] : prefix[end];
39            res.push_back(ans);
40        }
41
42        return res;
43
44    }
45};