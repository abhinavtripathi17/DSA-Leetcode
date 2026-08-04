// Last updated: 8/4/2026, 12:40:53 PM
class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        
        int low = 0 , high = m-1;
        int k = 0;
        while(low <= high){
            int mid = (low + high)/2;

            int idx = -1;
            int maxi = INT_MIN;
            for(int i = 0 ; i < n ; i++){
                if(mat[i][mid] > maxi){
                    maxi = mat[i][mid];
                    idx = i;
                }
            }

            int left = mid - 1 >= 0 ? mat[idx][mid-1] : -1;
            int right = mid + 1 < m ? mat[idx][mid+1] : -1;
            cout << k <<" ";
            if(mat[idx][mid] > left && mat[idx][mid] > right){
                return {idx , mid};
            }
            else if(mat[idx][mid] < left){
                high = mid - 1; 
            }
            else{
                low = mid + 1;
            }
            k++;
        }
        return {-1 , -1};
    }
};