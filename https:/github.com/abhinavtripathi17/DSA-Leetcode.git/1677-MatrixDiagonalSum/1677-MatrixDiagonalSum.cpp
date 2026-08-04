// Last updated: 8/4/2026, 12:42:50 PM
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        // int m = mat[0].size();

        int ans = 0;
        // ans -= mat[n/2][n/2];

        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                if(i == j || i + j == n-1){
                    ans += mat[i][j];
                }
            }
        }

        return ans;
    }
};