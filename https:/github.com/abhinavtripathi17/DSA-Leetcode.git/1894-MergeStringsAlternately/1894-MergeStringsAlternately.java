// Last updated: 8/4/2026, 12:41:53 PM
class Solution {
    public String mergeAlternately(String word1, String word2) {
        int i = 0 , j = 0;
        String result = "";
        while(i < word1.length() && j < word2.length()){
            result = result + word1.charAt(i);
            result = result + word2.charAt(j);
            i++;
            j++;
        }
        while(i < word1.length()){
           result = result + word1.charAt(i);
           i++; 
        }
        while(j < word2.length()){
           result = result + word2.charAt(j); 
           j++;
        }

        return result;
    }
}