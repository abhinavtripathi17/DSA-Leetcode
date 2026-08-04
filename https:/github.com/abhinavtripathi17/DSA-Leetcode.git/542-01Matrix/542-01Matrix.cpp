// Last updated: 8/4/2026, 7:15:08 PM
class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        vector<vector<int>>visit(n , vector<int>(m,0));
        vector<vector<int>>dist(n , vector<int>(m));

        queue<pair<int , pair<int,int>>>q;

        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(mat[i][j] == 0){
                    q.push({0 , {i,j}});
                    visit[i][j] = 1;
                }
            }
        }

        int drow[] = {-1 , 0 , 1 , 0};
        int dcol[] = {0 , 1 , 0 ,-1};

        while(!q.empty()){
            int d = q.front().first;
            int row = q.front().second.first;
            int col = q.front().second.second;
            q.pop();

            dist[row][col] = d;
            for(int i = 0 ; i < 4 ; i++){
                int r = row + drow[i];
                int c = col + dcol[i];

                if(r >= 0 && c >= 0 && r < n && c < m && !visit[r][c]){
                    visit[r][c] = 1;
                    q.push({d+1 , {r , c}});
                }
            }
        }

        return dist;
    }
};