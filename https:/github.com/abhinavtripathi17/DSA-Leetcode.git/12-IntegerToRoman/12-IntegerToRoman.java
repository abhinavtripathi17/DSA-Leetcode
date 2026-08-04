// Last updated: 8/4/2026, 7:26:22 PM
class Solution {
    public String intToRoman(int num) {
        int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        String symbols[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        String ans = "";

        for(int i = 0 ; i < values.length && num > 0 ; i++){
            while(num >= values[i]){
                num -= values[i];
                ans = ans + symbols[i];
            }
        }
        return ans;
    }
}