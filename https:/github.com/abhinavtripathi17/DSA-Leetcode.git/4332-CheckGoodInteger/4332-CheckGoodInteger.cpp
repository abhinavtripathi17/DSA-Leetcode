// Last updated: 8/4/2026, 12:33:07 PM
class Solution {
public:
    bool checkGoodInteger(int n) {
        int digitSum = 0;
        int squareSum = 0;

        while(n > 0){
            int digit = n%10;
            digitSum += digit;
            squareSum += digit*digit;
            n = n/10;
        }

        if(squareSum - digitSum >= 50) return true;
        else return false;
    }
};