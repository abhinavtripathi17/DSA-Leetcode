// Last updated: 8/4/2026, 7:26:39 PM
class Solution {
    public int reverse(int x) {
        long r = 0;
        while(x != 0){
            r = r*10 + x%10;
            x = x/10;
        }
        if(r > Integer.MAX_VALUE || r < Integer.MIN_VALUE){
            return 0;
        }
        return (int)r;
    }
}