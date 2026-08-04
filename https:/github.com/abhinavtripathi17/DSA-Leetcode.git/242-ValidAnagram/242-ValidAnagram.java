// Last updated: 8/4/2026, 7:17:58 PM
class Solution {
    public boolean isAnagram(String s, String t) {
        int arr [] = new int [26];
        if(s.length() != t.length()) return false;

        for(int i = 0 ; i < s.length() ; i++){ 
            int a = s.charAt(i) - 'a';
            int b = t.charAt(i) - 'a';

            arr[a]++;
            arr[b]--;
        } 
        for(int i = 0 ; i < arr.length ; i++){
            if(arr[i] != 0) return false;
        }
        return true;
    }
}