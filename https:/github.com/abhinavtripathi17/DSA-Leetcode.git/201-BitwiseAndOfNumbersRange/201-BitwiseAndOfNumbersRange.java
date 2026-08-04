// Last updated: 8/4/2026, 7:19:18 PM
class Solution {
    public int rangeBitwiseAnd(int left, int right) {
        int cnt = 0;
        while(left < right){
            left = left >> 1;
            right = right >> 1;
            cnt++;
        }
        return left << cnt;
    }
}