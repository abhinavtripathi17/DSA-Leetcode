// Last updated: 8/4/2026, 12:33:05 PM
class Solution {
public:
    vector<vector<int>> aggregateTimeSeries(vector<vector<int>>& series1, vector<vector<int>>& series2) {


        int n = series1.size();
        int m = series2.size();

        vector<vector<int>>ans;

        int i = 0 , j = 0;

        while(i < n || j < m){
            int timeStamp = 0;
            if(i < n && j < m){
                timeStamp = min(series1[i][0] , series2[j][0]);
            }
            else if(i < n){
                timeStamp = series1[i][0];
            }
            else{
                timeStamp = series2[j][0];
            }

            int v1 = 0;
            if(i < n){
                v1 = series1[i][1];
            }
            int v2 = 0;
            if(j < m){
                v2 = series2[j][1];
            }

            ans.push_back({timeStamp , v1+v2});

            if(i < n && series1[i][0] == timeStamp){
                i++;
            }
            if(j < m && series2[j][0] == timeStamp){
                j++;
            }
        }
        return ans;
    }
};