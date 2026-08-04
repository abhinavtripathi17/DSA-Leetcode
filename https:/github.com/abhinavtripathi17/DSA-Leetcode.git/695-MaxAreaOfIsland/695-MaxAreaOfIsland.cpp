// Last updated: 8/4/2026, 7:13:42 PM
class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>>visit(n , vector<int>(m , 0));

        int drow[] = {-1 , 0 , 1 , 0};
        int dcol[] = {0 , 1 , 0 , -1};

        int maxi = 0;

        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(grid[i][j] == 1 && visit[i][j] == 0){
                    visit[i][j] = 1;
                    queue<pair<int , int>>q;
                    q.push({i , j});
                    int cnt = 1;

                    while(!q.empty()){
                        int row = q.front().first;
                        int col = q.front().second;
                        q.pop();

                        for(int i = 0 ; i < 4 ; i++){
                            int r = drow[i] + row;
                            int c = dcol[i] + col;

                            if(r >= 0 && c >= 0 && r < n && c < m && grid[r][c] == 1 && visit[r][c] == 0){
                                visit[r][c] = 1;
                                q.push({r , c});
                                cnt++;
                            }
                        }
                        maxi = max(cnt , maxi);
                    }
                }
            }
        }
        return maxi;
    }
};