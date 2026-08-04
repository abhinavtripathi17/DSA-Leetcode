// Last updated: 8/4/2026, 7:11:51 PM
class Solution {
    public boolean lemonadeChange(int[] bills) {
        int five_change = 0 , ten_change = 0;
        if(bills[0] > 5) return false;

        for(int i = 0 ; i < bills.length ; i++){
            if(bills[i] == 5){
                five_change += 5;
            }

            else if(bills[i] == 10){
                if(five_change < 5) return false; 
                ten_change += 10;
                five_change -= 5;
            }

            else{
                if(five_change >= 5 && ten_change >= 10){
                    five_change -= 5;
                    ten_change -= 10;
                }
                else if(five_change >= 15){
                    five_change -= 15;
                }
                else{
                    return false;
                }
            }
        }
        return true;
    }
}