// Last updated: 8/4/2026, 12:36:03 PM
class Solution {
public:
    bool findSafeWalk(vector<vector<int>>& grid, int health) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>>visit(n , vector<int>(m , 0));

        priority_queue<pair<int , pair<int,int>>>pq;
        if(grid[0][0] == 1) health = health-1;
        pq.push({health , {0 , 0}});
        visit[0][0] = 1;

        int drow[] = {-1 , 0 , 1 , 0};
        int dcol[] = {0 , 1 , 0 , -1};

        while(!pq.empty()){
            int h = pq.top().first;
            int row = pq.top().second.first;
            int col = pq.top().second.second;
            pq.pop();
            if(h <= 0) return false; 
            if(row == n-1 && col == m-1) return true;

            for(int i = 0 ; i < 4 ; i++){
                int r = drow[i] + row;
                int c = dcol[i] + col;
                if(r >= 0 && c >= 0 && r < n && c < m && visit[r][c] == 0){
                    visit[r][c] = 1;
                    if(grid[r][c] == 1){
                        pq.push({h-1 , {r , c}});
                    }
                    else{
                        pq.push({h , {r , c}});
                    }
                }
            }
        }

        return false;
    }
};