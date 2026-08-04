// Last updated: 8/4/2026, 7:24:21 PM
class Solution {
    public List<Integer> spiralOrder(int[][] matrix) {
        List<Integer>ll = new ArrayList<>();
        int n = matrix.length;
        int m = matrix[0].length;

        int top = 0 , left = 0 , bottom = n-1 , right = m-1;

        while(top <= bottom && left <= right){

            for(int i = left ; i <= right ; i++){
                ll.add(matrix[top][i]);
            }
            top++;

            for(int i = top ; i <= bottom ; i++){
                ll.add(matrix[i][right]);
            }
            right--;

            if(top <= bottom){
                for(int i = right ; i >= left ; i--){
                    ll.add(matrix[bottom][i]);
                }
                bottom--;
            }
            

            if(left <= right){
                for(int i = bottom ; i >= top ; i--){
                    ll.add(matrix[i][left]);
                }
                left++;
            }
        }
        return ll;
    }
}