// Last updated: 8/4/2026, 7:12:34 PM
class Solution {
public:
    int rotatedDigits(int n) {
        int cnt = 0;
        for(int i = 1 ; i <= n ; i++){
            if(isdigit(i)){
                cnt++;
            }
        }
        return cnt;
    }
    bool isdigit(int num){
        bool isGood = false;
        while(num > 0){
            int digit = num%10;
            if(digit == 3 || digit == 4 ||digit == 7) return false;

            if(digit == 2 || digit == 5 || digit == 6 || digit == 9){
                isGood = true;
            }

            num = num/10;
        }

        return isGood;
    }
};