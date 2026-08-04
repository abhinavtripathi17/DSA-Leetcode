// Last updated: 8/4/2026, 7:23:27 PM
class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int n = matrix.length;
        int m = matrix[0].length;

        int low = 0 , high = (m*n)-1;

        while(low <= high){
            int mid = (low + high)/2;

            if(matrix[mid/m][mid%m] == target) return true;

            else if(matrix[mid/m][mid%m] > target){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }

        return false;
    }
}