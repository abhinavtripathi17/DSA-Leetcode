// Last updated: 8/8/2026, 12:24:41 PM
1class Solution {
2public:
3    vector<int> validSequence(string word1, string word2) {
4        int n = word1.length();
5        int m = word2.length();
6
7        int j = m-1;
8        vector<int>last(m , -1);
9
10        for(int i = n-1 ; i >= 0 ; i--){
11            if(j >= 0 && word1[i] == word2[j]){
12                last[j] = i;
13                j--;
14            }
15        }
16
17        j = 0;
18        int flag = 1;
19        vector<int>ans;
20
21        for(int i = 0 ; i < n ; i++){
22            if(j < m){
23                if(word1[i] == word2[j] || (flag == 1 && (j == m-1 || i+1 <= last[j+1]))){
24                    if(word1[i] != word2[j]){
25                        flag = 0;
26                    }
27                    ans.push_back(i);
28                    j++;
29                }
30            }
31        }
32        return j == m ? ans : vector<int>();
33
34    }
35};