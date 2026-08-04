// Last updated: 8/4/2026, 12:40:42 PM
class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        long long maxsum = 0;
        int mini = INT_MAX;
        int cnt = 0;
        long long ans = 0;

        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                if(matrix[i][j] < 0){
                    cnt++;
                }

                mini = min(mini ,abs(matrix[i][j]));
                maxsum += abs(matrix[i][j]);
            }
        }
        if(cnt % 2 == 1){
            ans = maxsum - 2*mini;
        }
        else{
            ans = maxsum;
        }

        return ans;
        
    }
};