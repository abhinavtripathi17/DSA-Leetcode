// Last updated: 8/4/2026, 12:44:08 PM
 class Solution {
    public List<Integer> luckyNumbers(int[][] matrix) {
        List<Integer>ll = new ArrayList<>();
        int n = matrix.length;
        int m = matrix[0].length;

        int row_min[] = new int [n];
        int col_max[] = new int [m];

        Arrays.fill(row_min , Integer.MAX_VALUE);

        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                row_min[i] = Math.min(row_min[i] , matrix[i][j]);
                col_max[j] = Math.max(col_max[j] , matrix[i][j]);

            }
        }

        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(matrix[i][j] == row_min[i] && matrix[i][j] == col_max[j]){
                    ll.add(matrix[i][j]);
                    break;
                }
            }
        }

        return ll;

    }
}