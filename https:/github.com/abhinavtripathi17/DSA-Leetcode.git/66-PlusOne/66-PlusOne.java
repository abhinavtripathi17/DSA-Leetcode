// Last updated: 8/4/2026, 7:23:47 PM
class Solution {
    public int[] plusOne(int[] digits) {
        int n = digits.length;
        int sum = 0;

        for(int i = digits.length - 1 ; i >= 0 ; i--){
            if(digits[i] < 9){
                digits[i]++;
                return digits;
            }
            else{
                digits[i] = 0;
            }
        }
        digits = new int[n+1];
        digits[0] = 1;
        return digits;
        
        
    //    int sum = 0;
    //    int cnt = 0;
    //    for(int i = digits.length - 1 ; i >= 0 ; i--){
    //     sum += digits[i] * (int)Math.pow(10 , cnt);
    //     cnt++;
    //    } 
    //    sum++;

    //    String str = Integer.toString(sum);

    //    int arr[] = new int[str.length()];
       
    //    for(int i = 0 ; i < arr.length ; i++){
    //     arr[i] = str.charAt(i) - '0';
    //    }
    //    return arr;       
    }
}