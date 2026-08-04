// Last updated: 8/4/2026, 7:10:07 PM
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        int maxTime = 0;
        queue<pair<int , pair<int , int>>>q;

        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(grid[i][j] == 2){
                    q.push({0 , {i , j}});
                }
            }
        }

        int drow[] = {-1 , 0 , 1 , 0};
        int dcol[] = {0 , 1 , 0 , -1};

        while(!q.empty()){
            int row = q.front().second.first;
            int col = q.front().second.second;
            int time = q.front().first;
            q.pop();

            if(time > maxTime) maxTime = time;

            for(int i = 0 ; i < 4 ; i++){
                int newR = row + drow[i];
                int newC = col + dcol[i];

                if(newR >= 0 && newR < n && newC >= 0 && newC < m && grid[newR][newC] == 1){
                    grid[newR][newC]++;
                    q.push({time+1, {newR , newC}});
                    
                }
            }
        }

        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(grid[i][j] == 1){
                    return -1;
                }
            }
        }

        return maxTime;
    }
};