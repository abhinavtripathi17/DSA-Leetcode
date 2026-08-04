// Last updated: 8/4/2026, 7:08:56 PM
class Solution {
    public int canBeTypedWords(String text, String brokenLetters) {
        HashMap<Character , Integer>mpp = new HashMap<>();
        int cnt = 0;
        for(int i = 0 ; i < brokenLetters.length() ; i++){
            mpp.put(brokenLetters.charAt(i) , 1);
        }
        boolean isPresent = false;
        for(int i = 0 ; i < text.length() ; i++){
            
            if(text.charAt(i) != ' '){
                if(mpp.containsKey(text.charAt(i))){
                    isPresent = true;
                   
                }
            }
            if(text.charAt(i) == ' '){
                if(isPresent == false){
                    cnt++;
                }
                if(isPresent == true){
                    isPresent = false;
                }
            }
            
        }
        if(!isPresent){
            cnt++;
        }
        return cnt;
    }
}