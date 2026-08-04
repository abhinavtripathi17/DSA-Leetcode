// Last updated: 8/4/2026, 7:12:04 PM
class Solution {
    public int[][] flipAndInvertImage(int[][] image) {
        int n = image.length;
        int m = image[0].length;

        for(int i = 0 ; i < n ; i++){
            reverse(image , 0 , m-1 , i); 
        }

        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(image[i][j] == 0){
                    image[i][j] = 1;
                }
                else{
                    image[i][j] = 0;
                }
            }
        }
        return image;
    }

    public void reverse(int[][] arr , int i , int j , int row){
        while(i < j){
            int temp = arr[row][j];
            arr[row][j] = arr[row][i];
            arr[row][i] = temp;
            i++;
            j--; 
        }
    }
}