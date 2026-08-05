// Last updated: 8/5/2026, 1:25:01 PM
1class Solution {
2public:
3    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {
4        vector<vector<int>>adj(n);
5
6        for(auto it : invocations){
7            adj[it[0]].push_back(it[1]);
8        }
9
10        vector<int>bug(n , 0);
11
12        queue<int>q;
13        bug[k] = 1;
14        q.push(k);
15
16        while(!q.empty()){
17            int node = q.front();
18            q.pop();
19
20            for(auto it : adj[node]){
21                if(!bug[it]){
22                    bug[it] = 1;
23                    q.push(it);
24                }
25            }
26        }
27
28        for(auto it : invocations){
29            if(!bug[it[0]] && bug[it[1]]){
30                vector<int>ans;
31                for(int i = 0 ; i < n ; i++){
32                    ans.push_back(i);
33
34                }
35                return ans;
36            }
37        }
38
39        vector<int>ans;
40        for(int i = 0 ; i < n ; i++){
41            if(bug[i] == 0){
42                ans.push_back(i);
43            }
44        }
45
46        return ans;
47        
48
49        return bug;
50    }
51};