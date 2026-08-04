// Last updated: 8/4/2026, 12:37:06 PM
class Solution {
    public int areaOfMaxDiagonal(int[][] dimensions) {
        int m = dimensions.length;
        double diagonal = 0 , max_diag = 0 ;
        int area = 0 , max_area = 0; 
        for(int i = 0 ; i < m ; i++){
            int sqr = (dimensions[i][0] * dimensions[i][0])+(dimensions[i][1] * dimensions[i][1]);
            diagonal = Math.sqrt(sqr);
            if(diagonal > max_diag){
                max_diag = diagonal;
                max_area = dimensions[i][0] * dimensions[i][1];
            }
            else if(diagonal == max_diag){
                max_area = Math.max(max_area , dimensions[i][0] * dimensions[i][1]);
            }
            
        }
        return max_area;

    }
}