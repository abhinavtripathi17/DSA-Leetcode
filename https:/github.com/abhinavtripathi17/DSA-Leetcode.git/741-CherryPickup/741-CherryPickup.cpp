// Last updated: 8/4/2026, 7:13:13 PM
class Solution {
public:
    int dp[50][50][50][50];
    int cherryPickup(vector<vector<int>>& grid) {
        int n = grid.size();
        memset(dp , -1 , sizeof(dp));

        int ans = solve(grid , 0 , 0 , 0 , 0 , n);
        return max(0 , ans);
    }

    int solve(vector<vector<int>>& grid , int r1 , int c1 , int r2 , int c2 , int n){
        if(r1 >= n || c1 >= n || r2 >= n || c2 >= n){
            return -1e9;
        }

        if(grid[r1][c1] == -1 || grid[r2][c2] == -1){
            return -1e9;
        }
        
        if(r1 == n-1 && c1 == n-1 && r2 == n-1 && c2 == n-1){
            return grid[r1][c1];
        }

        if(dp[r1][c1][r2][c2] != -1){
            return dp[r1][c1][r2][c2];
        }

        // int cherry = grid[i][j] == 1 ? 1 :-1;
        int cherry = 0;
        if(r1 == r2 && c1 == c2){ //same cell ->once counted
            cherry += grid[r1][c1];
        }
        else{
            cherry += grid[r1][c1];
            cherry += grid[r2][c2];
        }

        int RR = solve(grid , r1 , c1+1 , r2 , c2+1 , n);
        int RD = solve(grid , r1 , c1+1 , r2+1 , c2 , n);
        int DR = solve(grid , r1+1 , c1 , r2 , c2+1 , n);
        int DD = solve(grid , r1+1 , c1 , r2+1 , c2 , n);

        return dp[r1][c1][r2][c2] = cherry + max({RR , RD , DR , DD});

    }
};