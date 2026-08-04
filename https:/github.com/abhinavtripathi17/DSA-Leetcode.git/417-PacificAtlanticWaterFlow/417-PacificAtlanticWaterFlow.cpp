// Last updated: 8/4/2026, 7:16:26 PM
class Solution {
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int n = heights.size();
        int m = heights[0].size();

        vector<vector<int>>ans;

        vector<vector<int>>pacific(n , vector<int>(m , 0));
        vector<vector<int>>atlantic(n , vector<int>(m , 0));

        queue<pair<int , int>>qp;
        queue<pair<int , int>>qa;

        for(int i = 0 ; i < n ; i++){
            qp.push({i , 0});
            qa.push({i , m-1});
            pacific[i][0] = 1;
            atlantic[i][m-1] = 1;
        }
        for(int i = 0 ; i < m ; i++){
            qp.push({0 , i});
            qa.push({n-1 , i});
            pacific[0][i] = 1;
            atlantic[n-1][i] = 1;
        }

        //bfs for pacific
        bfs(qp , pacific , heights);
        //bfs for atlantic
        bfs(qa , atlantic , heights);

        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(pacific[i][j] && atlantic[i][j]){
                    ans.push_back({i , j});
                }
            }
        }
        return ans;        
        
    }
    void bfs(queue<pair<int,int>>q , vector<vector<int>>&visit , vector<vector<int>>&heights){
        int n = heights.size();
        int m = heights[0].size();

        int d_row[4] = {-1 , 0 , 1 , 0};
        int d_col[4] = {0 , 1 , 0 , -1};

        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();

            for(int i = 0 ; i < 4 ; i++){
                int r = d_row[i] + row;
                int c = d_col[i] + col;

                if(r >= 0 && c >= 0 && r < n && c < m && !visit[r][c] && heights[r][c] >= heights[row][col]){
                    visit[r][c] = 1;
                    q.push({r , c});
                }
            }
        }
    }
};