// Last updated: 8/8/2026, 11:32:05 PM
1class Solution {
2public:
3    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& queries) {
4        vector<vector<int>>mat(n , vector<int>(n , 0));
5
6        for(auto query : queries){
7            int r1 = query[0];
8            int c1 = query[1];
9            int r2 = query[2];
10            int c2 = query[3];
11
12            for(int i = r1 ; i <= r2 ; i++){
13                mat[i][c1] += 1;
14
15                if(c2 + 1 < n){
16                    mat[i][c2+1] -= 1;
17                }
18            }
19        }
20
21        for(int i = 0 ; i < n ; i++){
22            for(int j = 1 ; j < n ; j++){
23                mat[i][j] = mat[i][j] + mat[i][j-1];
24            }
25        }
26
27       return mat;
28    }
29};