// Last updated: 8/4/2026, 12:40:38 PM
class Solution {
public:
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        int n = land.size();
        int m = land[0].size();

        vector<vector<int>>ans;
        int d_row[] = {-1 , 0 , 1 , 0};
        int d_col[] = {0 , 1 , 0 , -1};
        int end_col = 0;
        int end_row = 0;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(land[i][j] == 1){                    
                    queue<pair<int,int>>q;
                    q.push({i , j});
                    land[i][j] = 0;
                    int end_row = i;
                    int end_col = j;
                    while(!q.empty()){
                        int row = q.front().first;
                        int col = q.front().second;
                        q.pop();
                        for(int i = 0 ; i < 4 ; i++){
                            int r = row + d_row[i];
                            int c = col + d_col[i];

                            if(r >= 0 && c >= 0 && r < n && c < m && land[r][c] == 1){
                                land[r][c] = 0;
                                q.push({r , c});
                                end_row = r;
                                end_col = c;
                            }
                            
                        }
                    }
                    ans.push_back({i , j , end_row, end_col});
                }
            }
        }
        return ans;
    }
};