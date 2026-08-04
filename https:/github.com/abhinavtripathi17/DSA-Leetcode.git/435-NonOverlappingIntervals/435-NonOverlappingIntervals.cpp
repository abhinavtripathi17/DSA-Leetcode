// Last updated: 8/4/2026, 7:16:17 PM
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin() , intervals.end() , [] (vector<int>&a , vector<int>&b){
           return a[1] < b[1]; 
        });
        int cnt = 0;

        int start = intervals[0][0];
        int end = intervals[0][1];
        for(int i = 1 ; i < n ; i++){
            if(intervals[i][0] < end){
                cnt++;
            }
            else{
                start = intervals[i][0];
                end = intervals[i][1];
            }
        }
        return cnt;
    }
};