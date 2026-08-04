// Last updated: 8/4/2026, 12:37:41 PM
class Solution {
    public String sortVowels(String s) {
        char ch[] = s.toCharArray();
        ArrayList<Character>ll = new ArrayList<>();

        for(char c : ch){
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
                ll.add(c);
            }
        }

        Collections.sort(ll);
        int k = 0;
        for(int i = 0 ; i < ch.length ; i++){
            if(ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u' || ch[i] == 'A' || ch[i] == 'E' || ch[i] == 'I' || ch[i] == 'O' || ch[i] == 'U'){
                ch[i] = ll.get(k);
                k++;
            }
        }
        String str = "";
        for(int i = 0 ; i < ch.length ; i++){
            str += ch[i];
        }
        return str;
    }
}