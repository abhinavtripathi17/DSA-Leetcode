// Last updated: 8/4/2026, 12:38:39 PM
class Solution {
    public int vowelStrings(String[] words, int left, int right) {
       List<Character>ll =  new ArrayList<>();
       ll.add('a');
       ll.add('e');
       ll.add('i');
       ll.add('o');
       ll.add('u');
       int cnt = 0;

       for(int i = left ; i <= right ; i++){
        String s = words[i];
        if(ll.contains(s.charAt(0)) && ll.contains(s.charAt(s.length()-1))){
            cnt++;
        }
       }
       return cnt;
    }
}