// Last updated: 8/4/2026, 7:17:18 PM
class NumMatrix {
public:
    int prefixSum[200][200];
    NumMatrix(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        prefixSum[0][0] = matrix[0][0];
        for(int j = 1 ; j < m ; j++){
            prefixSum[0][j] = matrix[0][j] + prefixSum[0][j-1];
        }
        for(int i = 1 ; i < n ; i++){
            prefixSum[i][0] = matrix[i][0] + prefixSum[i-1][0];
        }
        for(int i = 1 ; i < n ; i++){
            for(int j = 1 ; j < m ; j++){
                prefixSum[i][j] = matrix[i][j] + prefixSum[i-1][j] + prefixSum[i][j-1] - prefixSum[i-1][j-1];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int ans = prefixSum[row2][col2];
        if(row1 > 0) ans -= prefixSum[row1-1][col2];
        if(col1 > 0) ans -= prefixSum[row2][col1-1];
        if(row1 > 0 && col1 > 0) ans += prefixSum[row1-1][col1-1];
        return ans;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */