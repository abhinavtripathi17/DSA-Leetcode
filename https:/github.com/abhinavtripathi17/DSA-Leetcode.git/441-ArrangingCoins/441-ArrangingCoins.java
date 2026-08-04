// Last updated: 8/4/2026, 7:16:10 PM
class Solution {
    public int arrangeCoins(int n) {
        int num = n ;
        for(int i = 1 ; i <= n ; i++){
            num = num - i;
            if(num < 0){
                return i - 1;
            }
        }
        return 1;
    }
}