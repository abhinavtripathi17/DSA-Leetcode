// Last updated: 8/4/2026, 7:20:31 PM
class Solution {
    public String reverseWords(String s) {
        List<String>ll = new ArrayList<>();

        int i = 0;
        int n = s.length();
        int start = 0;

        while(i < n){
            while(i < n && s.charAt(i) == ' '){
                i++;
            }
            if(i >= n) break;
            start = i;

            while(i < n && s.charAt(i) != ' '){
                i++;
            }
            ll.add(s.substring(start , i));
        }
        Collections.reverse(ll);

        return String.join(" " , ll);
    }
}