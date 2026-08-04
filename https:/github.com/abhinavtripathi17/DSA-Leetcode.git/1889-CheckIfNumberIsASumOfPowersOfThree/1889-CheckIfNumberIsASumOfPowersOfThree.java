// Last updated: 8/4/2026, 12:42:00 PM
class Solution {
    public boolean checkPowersOfThree(int n) {
         while (n > 0) {
            if (n % 3 == 2) {
                return false;
            }
            n /= 3;
        }
        return true;
    }
}