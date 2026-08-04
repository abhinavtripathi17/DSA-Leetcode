// Last updated: 8/4/2026, 7:09:47 PM
class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        queue<pair<int ,int>>q;

        for(int i = 0 ; i < n ; i++){
            if(grid[i][0] == 1){
                grid[i][0] = 2;
                q.push({i , 0});
            }
            if(grid[i][m-1] == 1){
                grid[i][m-1] = 2;
                q.push({i , m-1});
            }
        }
        for(int j = 0 ; j < m ; j++){
            if(grid[0][j] == 1){
                grid[0][j] = 2;
                q.push({0 , j});
            }
            if(grid[n-1][j] == 1){
                grid[n-1][j] = 2;
                q.push({n-1 , j});
            }
        }

        int drow[] = {-1 , 0 , 1 , 0};
        int dcol[] = {0 , 1  , 0 , -1};

        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();


            for(int i = 0 ; i < 4 ; i++){
                int r = drow[i]+row;
                int c = dcol[i]+col;

                if(r >= 0 && c >= 0 && r < n && c < m && grid[r][c] == 1){
                    grid[r][c] = 2;
                    q.push({r , c});
                }
            }
        }
        int cnt = 0;

        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(grid[i][j] == 1) cnt++;
            }
        }
        return cnt;
    }
};