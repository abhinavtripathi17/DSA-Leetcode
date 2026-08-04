// Last updated: 8/4/2026, 12:37:22 PM
class Solution {
    public List<Integer> findWordsContaining(String[] words, char x) {
        List<Integer>res = new ArrayList<>();
        for(int i = 0 ; i < words.length ; i++){
            String s = words[i];
            for(int j = 0 ; j < s.length() ; j++){
                if(s.charAt(j) == x){
                    res.add(i);
                    break;
                } 
            }
        }
        return res;
    }
}