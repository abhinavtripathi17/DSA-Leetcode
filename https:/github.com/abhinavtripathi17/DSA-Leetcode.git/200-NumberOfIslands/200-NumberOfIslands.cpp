// Last updated: 8/4/2026, 7:19:22 PM
class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>>visit(n , vector<int>(m , 0));

        int island = 0;

        int dx[] = {-1 , 0 , 1 , 0};
        int dy[] = {0 , 1 , 0 , -1};

        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(grid[i][j] == '1' && !visit[i][j]){
                    visit[i][j] = 1;
                    queue<pair<int , int>>q;
                    island++;
                    q.push({i , j});

                    while(!q.empty()){
                        int row = q.front().first;
                        int col = q.front().second;
                        q.pop();

                        for(int i = 0 ; i < 4 ; i++){
                            int r = row + dx[i];
                            int c = col + dy[i];

                            if(r >= 0 && c >= 0 && r < n && c < m && !visit[r][c] && grid[r][c] == '1'){
                                visit[r][c] = 1;
                                q.push({r , c});
                            }
                        }
                    }
                }
            }
        }
        return island;
    }
};