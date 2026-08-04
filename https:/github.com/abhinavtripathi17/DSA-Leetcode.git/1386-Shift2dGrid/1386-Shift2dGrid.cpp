// Last updated: 8/4/2026, 12:45:12 PM
class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>>ans(n , vector<int>(m , 0));
        vector<vector<int>>res(n , vector<int>(m , 0));

        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                int newj = (j + k)%m;
                int newi = (i+(j+k)/m)%n;
                ans[newi][newj] = grid[i][j];
            }
        }

        for(auto it : ans){
            vector<int>temp;
            for(auto val : it){
                temp.push_back(val);
            }
            res.push_back(temp);
        }

        return ans;
    }
};