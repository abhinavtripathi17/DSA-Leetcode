// Last updated: 8/4/2026, 12:42:29 PM
class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        int n = heights.size();
        int m = heights[0].size();

        priority_queue<pair<int , pair<int,int>> , vector<pair<int,pair<int,int>>> , greater<pair<int , pair<int,int>>>> pq;

        vector<vector<int>>dist(n , vector<int>(m , 1e9));
        dist[0][0] = 0;

        pq.push({0 , {0,0}});

        int d_row [] = {-1,0,1,0};
        int d_col [] = {0,1,0,-1};

        while(!pq.empty()){
            int d = pq.top().first;
            int row = pq.top().second.first;
            int col = pq.top().second.second;
            pq.pop();

            if(row == n-1 && col == m-1){
                return d;
            }

            for(int i = 0 ; i < 4 ; i++){
                int r = row + d_row[i];
                int c = col + d_col[i];

                if(r >= 0 && c >= 0 && r < n && c < m){
                    int diff = max(abs(heights[r][c] - heights[row][col]) , d);
                    if(diff < dist[r][c]){
                        dist[r][c] = diff;
                        pq.push({diff , {r , c}});
                    }
                }
            }

        }
        return 0;

    }
};