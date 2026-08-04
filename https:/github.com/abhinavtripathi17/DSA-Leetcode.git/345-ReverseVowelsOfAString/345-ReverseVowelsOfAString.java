// Last updated: 8/4/2026, 7:16:56 PM
class Solution {

    public boolean isvowel(char ch){
        if(ch == 'a' || ch  == 'e' || ch  == 'i' ||ch  == 'o' || ch  == 'u' ||ch == 'A' || ch  == 'E' || ch  == 'I' ||ch  == 'O' || ch  == 'U'){
            return true;
        }
        return false;
    }    
    public String reverseVowels(String s) {
        char arr[] = s.toCharArray();
        int l = 0 ; 
        int r = arr.length-1;

        while(l < r){
            char c = arr[l];
            char d = arr[r];

            if(isvowel(c) && isvowel(d)){
               char temp =  arr[l];
                arr[l] = arr[r];
                arr[r] = temp;
                l++;
                r--;

            }
            else if(isvowel(c)){
                r--;
            }
            else{
                l++;
            }
            
        }
        return new String(arr);
    }
}