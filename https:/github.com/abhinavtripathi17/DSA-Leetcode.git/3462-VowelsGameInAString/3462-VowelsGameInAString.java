// Last updated: 8/4/2026, 12:36:19 PM
class Solution {
    public boolean doesAliceWin(String s) {
        int n = s.length();
        int cnt_vowel = 0;

        for(int i = 0 ; i < n ; i++){
            char c = s.charAt(i);
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
                cnt_vowel++;
            }
        }
        if(cnt_vowel == 0){
            return false;
        }
        else{
            return true;
        }
    }
}