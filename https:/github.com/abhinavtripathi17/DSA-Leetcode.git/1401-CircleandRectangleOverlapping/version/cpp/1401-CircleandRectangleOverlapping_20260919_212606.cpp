// Last updated: 9/19/2026, 9:26:06 PM
1class Solution {
2public:
3    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
4        int xi = -1;
5        int yi = -1;
6        //nearest x
7        if(xCenter < x1){
8            xi = x1;
9        }
10        else if(x2 < xCenter){
11            xi = x2;
12        }
13        else{
14            xi = xCenter;
15        }
16
17        //nearest y
18        if(yCenter < y1){
19            yi = y1;
20        }
21        else if(y2 < yCenter){
22            yi = y2;
23        }
24        else{
25            yi = yCenter;
26        }
27
28        // int d = 0;
29        int d = ((xCenter - xi)*(xCenter - xi)) + ((yCenter - yi)*(yCenter - yi));
30        d = sqrt(d);
31
32        if(d <= radius){
33            return true;
34        }
35        else return false;
36    }
37};