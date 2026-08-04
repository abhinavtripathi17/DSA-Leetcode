// Last updated: 8/4/2026, 12:45:19 PM
class Solution {
    public List<List<Integer>> shiftGrid(int[][] grid, int k) {
        List<List<Integer>>result = new ArrayList<>();
        int n = grid.length;
        int m = grid[0].length;

        int[][] ans = new int[n][m];  

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                int newJ = (j + k) % m;                
                int newI = (i + (j + k) / m) % n;      
                ans[newI][newJ] = grid[i][j];
            }
        }

       for(int[] row : ans){
            List<Integer> temp = new ArrayList<>();
            for(int val : row) temp.add(val);
            result.add(temp);
        }

        return result;

    }
}