// Last updated: 8/4/2026, 7:24:39 PM
class Solution {
public:
    
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                if(i > j){
                    swap(matrix[i][j] , matrix[j][i]);
                }
            }
        }

        for(int i = 0 ; i < n ; i++){
            reverse(matrix[i].begin() , matrix[i].end());
        }
    }
};