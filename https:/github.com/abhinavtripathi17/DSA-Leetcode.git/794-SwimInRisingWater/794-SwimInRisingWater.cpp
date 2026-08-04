// Last updated: 8/4/2026, 7:12:42 PM
class Solution {
public:
    int swimInWater(vector<vector<int>>& grid) {
        int n = grid.size();
        priority_queue<pair<int,pair<int,int>> , vector<pair<int , pair<int,int>>> , greater<pair<int , pair<int,int>>>>pq;

        vector<vector<int>>visit(n , vector<int>(n,0));
        
        pq.push({grid[0][0] , {0 , 0}});
        visit[0][0] = 1;

        int d_row[] = {-1 , 0 , 1 , 0};
        int d_col[] = {0 , 1 , 0 , -1};

        while(!pq.empty()){
            int ele = pq.top().first;
            int row = pq.top().second.first;
            int col = pq.top().second.second;
            pq.pop();

            if(row == n-1 && col == n-1){
                return ele;
            }

            for(int i = 0 ; i < 4 ; i++){
                int r = row + d_row[i];
                int c = col + d_col[i];

                if(r >= 0 && c >= 0 && r < n && c < n && !visit[r][c]){
                    visit[r][c] = 1;
                    pq.push({max(ele , grid[r][c]) , {r , c}});
                }
            }
            
        }
        return -1;
    }
};