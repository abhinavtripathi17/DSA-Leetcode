// Last updated: 8/4/2026, 7:11:11 PM
class Solution {
    public int minAddToMakeValid(String s) {
        int n = s.length();
        int unbalanced = 0;
        int balanced = 0;
        for(int i = 0 ; i < n ; i++){
            if(s.charAt(i) == '('){
                balanced++;
            }
            else if(s.charAt(i) == ')' && balanced > 0){
                balanced--;
            }
            else{
                unbalanced++;
            }
        }
        return unbalanced + balanced;
    }
}