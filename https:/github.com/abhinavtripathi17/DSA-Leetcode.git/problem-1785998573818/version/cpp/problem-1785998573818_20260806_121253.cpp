// Last updated: 8/6/2026, 12:12:53 PM
1class Solution {
2public:
3    int bestClosingTime(string customers) {
4        int n = customers.length();
5
6        vector<int>N_prefix(n+1 , 0);
7
8        for(int i = 1 ; i <= n ; i++){
9            if(customers[i-1] == 'N'){
10                N_prefix[i] = 1 + N_prefix[i-1];
11            }
12            else{
13                N_prefix[i] = N_prefix[i-1];
14            }
15        }
16
17        vector<int>Y_suffix(n+1 , 0);
18
19        for(int i = n-1 ; i >= 0 ; i--){
20            if(customers[i] == 'Y'){
21                Y_suffix[i] = 1 + Y_suffix[i+1];
22            }
23            else{
24                Y_suffix[i] = Y_suffix[i+1];
25            }
26        }
27
28        int minH = INT_MAX;
29        int minP = INT_MAX;
30        for(int i = 0 ; i <= n ; i++){
31            if(Y_suffix[i] + N_prefix[i] < minP){
32                minH = i;
33                minP = Y_suffix[i] + N_prefix[i];
34            }
35        }
36
37        return minH;
38    }
39};