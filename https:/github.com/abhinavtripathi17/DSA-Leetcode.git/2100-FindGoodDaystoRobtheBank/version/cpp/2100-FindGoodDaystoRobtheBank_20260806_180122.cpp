// Last updated: 8/6/2026, 6:01:22 PM
1class Solution {
2public:
3    vector<int> goodDaysToRobBank(vector<int>& security, int time) {
4        int n = security.size();
5
6        vector<int>inc(n , 0);
7        vector<int>dec(n , 0);
8
9        
10
11        for(int i = 1 ; i < n ; i++){
12            if(security[i-1] >= security[i]){
13                dec[i] = 1 + dec[i-1];
14            }
15            else{
16                dec[i] = 0;
17            }
18        }
19
20        for(int i = n-2 ; i >= 0 ; i--){
21            if(security[i+1] >= security[i]){
22                inc[i] = 1 + inc[i+1];
23            }
24            else{
25                inc[i] = 0;
26            }
27        }
28
29        vector<int>ans;
30
31        // for(int i = 0 ; i < n ; i++){
32        //     cout << dec[i] << endl;
33        // }
34
35        for(int i = time ; i < n - time ; i++){
36            if(inc[i] >= time && dec[i] >= time){
37                ans.push_back(i);
38            }
39        }
40
41        return ans;
42    }
43};