// Last updated: 8/4/2026, 7:24:45 PM
class Solution {
    public void rotate(int[][] matrix) {
        int n = matrix.length;
        int m = matrix[0].length;

        for(int i = 0 ; i < n ; i++){
            for(int j = i ; j < m ; j++){
                if(i != j){
                    int  temp = matrix[i][j];
                    matrix[i][j] = matrix[j][i];
                    matrix[j][i] = temp;
                }
            }
        }

        for(int i = 0 ; i < n ; i++){
            reverse(matrix , 0 , m-1 , i);
        }

    }
    public void reverse(int arr[][] , int i , int j, int row){
        while(i < j){
            int temp = arr[row][j];
            arr[row][j] = arr[row][i];
            arr[row][i] = temp;
            i++;
            j--;

        }
    }
}