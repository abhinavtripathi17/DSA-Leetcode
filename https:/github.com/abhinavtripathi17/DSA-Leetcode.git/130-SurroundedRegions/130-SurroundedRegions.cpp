// Last updated: 8/4/2026, 7:21:18 PM
class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();

        vector<vector<int>>visit(n , vector<int>(m , 0));
        queue<pair<int , int>>q;

        for(int i = 0 ; i < n ; i++){
            if(board[i][0] == 'O'){
                q.push({i , 0});
                visit[i][0] = 1;
            }
            if(board[i][m-1] == 'O'){
                q.push({i , m-1});
                visit[i][m-1] = 1;
            }
        }
        for(int j = 0 ; j < m ; j++){
            if(board[0][j] == 'O'){
                q.push({0 , j});
                visit[0][j] = 1;
            }
            if(board[n-1][j] == 'O'){
                q.push({n-1 , j});
                visit[n-1][j] = 1;
            }
        }

        int drow[] = {-1 , 0 , 1 , 0};
        int dcol[] = {0 , 1 , 0 , -1};

        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();

            for(int i = 0 ; i < 4 ; i++){
                int r = drow[i] + row;
                int c = dcol[i] + col;

                if(r >= 0 && c >= 0 && r < n && c < m && !visit[r][c] && board[r][c] == 'O'){
                    q.push({r , c});
                    visit[r][c] = 1;
                }
            }
        }

        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(!visit[i][j] && board[i][j] == 'O'){
                    board[i][j] = 'X';
                }
            }
        }
    }
};