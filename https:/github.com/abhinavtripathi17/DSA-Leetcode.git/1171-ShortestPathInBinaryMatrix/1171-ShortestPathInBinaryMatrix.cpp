// Last updated: 8/4/2026, 7:09:14 PM
class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        if(grid[0][0] == 1 || grid[n-1][n-1] == 1) return -1;
        
        queue<pair<int , pair<int , int>>>q;
        q.push({1 , {0,0}});

        vector<vector<int>>visit(n , vector<int>(n , 0));
        visit[0][0] = 1;

        int drow[] = {-1 , -1 , 0 , 1 , 1 , 1 , 0 , -1};
        int dcol[] = {0 , 1 , 1 , 1 , 0 , -1 , -1 , -1};

        while(!q.empty()){
            int d = q.front().first;
            int row = q.front().second.first;
            int col = q.front().second.second;
            q.pop();
            if(row == n-1 && col == n-1) return d;

            for(int i = 0 ; i < 8 ; i++){
                int r = drow[i] + row;
                int c = dcol[i] + col;

                if(r >= 0 && c >= 0 && r < n && c < n && !visit[r][c] && grid[r][c] == 0){
                    q.push({d+1 , {r , c}});
                    visit[r][c] = 1;
                }
            }
        }
        return -1;
    }
};