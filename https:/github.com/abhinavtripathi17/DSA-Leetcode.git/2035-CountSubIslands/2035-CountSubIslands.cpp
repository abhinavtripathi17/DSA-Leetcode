// Last updated: 8/4/2026, 12:41:08 PM
class Solution {
public:
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int n = grid1.size();
        int m = grid1[0].size();
        int cnt = 0;

        int d_row[] = {-1 , 0 , 1 , 0};
        int d_col[] = {0 , 1 , 0 , -1};

        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(grid2[i][j] == 1){
                    bool island = true;
                    queue<pair<int,int>>q;
                    q.push({i , j});
                    grid2[i][j] = 0;

                    while(!q.empty()){
                        int row = q.front().first;
                        int col = q.front().second;
                        q.pop();

                        if(grid1[row][col] == 0){
                            island = false;
                        }

                        for(int i = 0 ; i < 4 ; i++){
                            int r = d_row[i] + row;
                            int c = d_col[i] + col;

                            if(r >= 0 && c >= 0 && r < n && c < m && grid2[r][c] == 1){
                                grid2[r][c] = 0;
                                q.push({r , c});
                            }
                        }

                    }
                    if(island) cnt++;
                }
            }
        }
        return cnt;
    }
};