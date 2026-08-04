// Last updated: 8/4/2026, 7:54:11 PM
1class Solution {
2public:
3    int minimumRefill(vector<int>& plants, int capacityA, int capacityB) {
4        int n = plants.size();
5
6        int l = 0 , r = n-1;
7        int capA = capacityA , capB = capacityB;
8
9        int refill = 0;
10
11        while(l < r){
12
13            //if need > water available
14            if(plants[l] > capA){
15                capA = capacityA;
16                refill++;
17            }
18            if(plants[r] > capB){
19                capB = capacityB;
20                refill++;
21            }
22
23            //watering plants
24            if(plants[l] <= capA){
25                capA -= plants[l];
26            }
27            if(plants[r] <= capB){
28                capB -= plants[r];
29            }
30
31            // moving simultaneously
32            l++;
33            r--;
34            // cout << l << " " << r << refill << endl;
35        }
36
37        //if n is odd -> then they both in same pos , alice will water;
38        if(l == r && capA < plants[l] && capB < plants[l]){
39            refill++;
40        }
41        
42        return refill;
43    }
44};