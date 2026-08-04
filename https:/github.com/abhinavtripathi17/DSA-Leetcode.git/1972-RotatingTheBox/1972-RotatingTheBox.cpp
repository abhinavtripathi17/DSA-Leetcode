// Last updated: 8/4/2026, 12:41:26 PM
class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
        int n = boxGrid.size();
        int m = boxGrid[0].size();
        vector<vector<char>>mat(m , vector<char>(n));

        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                mat[j][i] = boxGrid[i][j];
            }
        }
        for(int i = 0 ; i < m ; i++){
            reverse(mat[i].begin() , mat[i].end());
        }
        
        for(int i = 0 ; i < n ; i++){
            int bottomRow = m-1;
            for(int j = m-1 ; j >= 0 ; j--){
                if(mat[j][i] == '*'){
                    bottomRow = j-1;
                    continue;
                }
                if(mat[j][i] == '#'){
                    mat[j][i] = '.';
                    mat[bottomRow][i] = '#';
                    bottomRow--;
                }
                
            }
        }
        return mat;
    }
};