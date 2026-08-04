// Last updated: 8/4/2026, 7:09:42 PM
class Solution {
public:
    vector<vector<int>> colorBorder(vector<vector<int>>& grid, int row, int col, int color) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>>visit(n , vector<int>(m , 0));

        int startColor = grid[row][col];
        visit[row][col] = 1;
        int drow[] = {-1 , 0 ,  1 , 0};
        int dcol[] = {0 , 1 , 0 , -1};
        queue<pair<int , int>>q;
        if(row == 0 || row == n-1 || col == 0 || col == m-1){
            grid[row][col] = color;
        }
        q.push({row , col});

        while(!q.empty()){
            int r = q.front().first;
            int c = q.front().second;
            q.pop();

            for(int i = 0 ; i < 4 ; i++){
                int nr = drow[i]+r;
                int nc = dcol[i]+c;

                if(nr >= 0 && nc >= 0 && nr < n && nc < m && !visit[nr][nc]){
                    if(grid[nr][nc] != startColor){
                        grid[r][c] = color;
                    }
                    else{
                        if(nr == 0 || nc == 0 || nr == n-1 || nc == m-1){
                            grid[nr][nc] = color;
                        }
                        visit[nr][nc]++;
                        q.push({nr , nc});
                    }
                }
            }
        }
        return grid;
    }
};