// Last updated: 8/4/2026, 12:34:39 PM
class Solution {
    public int findClosest(int x, int y, int z) {
        int d1 = Math.abs(x-z);
        int d2 = Math.abs(y-z);

        if(d1 < d2){
            return 1;
        }
        else if(d1 > d2) return 2;
        else return 0;
    }
}