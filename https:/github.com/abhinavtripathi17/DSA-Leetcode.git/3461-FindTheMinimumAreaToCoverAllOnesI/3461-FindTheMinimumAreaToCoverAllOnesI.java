// Last updated: 8/4/2026, 12:36:23 PM
class Solution {
    public int minimumArea(int[][] grid) {
        int m = grid.length;
        int n = grid[0].length;

        int minrow = Integer.MAX_VALUE;
        int maxrow = Integer.MIN_VALUE;
        int mincol = Integer.MAX_VALUE;
        int maxcol = Integer.MIN_VALUE;
        int area = 1;
        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                if(grid[i][j] == 1){
                    minrow = Math.min(minrow , i);
                    maxrow = Math.max(maxrow , i);
                    mincol = Math.min(mincol , j);
                    maxcol = Math.max(maxcol , j);
                }
            }
        }
        area = (maxrow - minrow + 1)*(maxcol - mincol + 1);
        return area;
    }
}