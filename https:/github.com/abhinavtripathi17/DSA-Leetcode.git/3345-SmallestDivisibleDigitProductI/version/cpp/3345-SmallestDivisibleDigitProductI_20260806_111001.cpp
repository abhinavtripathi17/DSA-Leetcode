// Last updated: 8/6/2026, 11:10:01 AM
1class Solution {
2public:
3    int smallestNumber(int n, int t) {
4        while(true){
5            int num = n;
6            int prod = 1;
7
8            while(num > 0){
9                prod *= (num % 10);
10                num /= 10;
11            }
12
13            if(prod % t == 0)
14                return n;
15
16            n++;
17        }
18    }
19};