// Last updated: 8/4/2026, 7:26:35 PM
class Solution {
public:
    bool isPalindrome(int x) {
     int original_num = x;
     long new_num = 0;
     if(x<0){
        return false;
     }
     while(x!=0){
        int digit = x%10;
        new_num = new_num*10 + digit;
        x = x/10;
     }  
     if(new_num == original_num){
        return true;
     }
     else{
        return false;
     }
    }
};