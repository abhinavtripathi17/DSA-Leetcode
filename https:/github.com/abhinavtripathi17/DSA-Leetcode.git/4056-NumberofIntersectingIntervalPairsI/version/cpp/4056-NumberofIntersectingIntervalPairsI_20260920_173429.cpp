// Last updated: 9/20/2026, 5:34:29 PM
1class Solution {
2public:
3    int countIntersectingIntervals(vector<vector<int>>& intervals) {
4        int n = intervals.size();
5        int cnt = 0;
6        sort(intervals.begin() , intervals.end());
7        for(int i = 0 ; i < n ; i++){
8            for(int j = i+1 ; j < n ; j++){
9                if(intervals[i][1] >= intervals[j][0]){
10                    cnt++;
11                }
12            }
13        }
14        return cnt;
15    }
16};