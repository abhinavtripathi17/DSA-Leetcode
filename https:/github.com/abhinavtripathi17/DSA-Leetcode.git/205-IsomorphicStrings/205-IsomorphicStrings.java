// Last updated: 8/4/2026, 7:19:07 PM
class Solution {
    public boolean isIsomorphic(String s, String t) {

       if(s.length() != t.length()) return false;

       HashMap<Character , Character >mpp = new HashMap<>();

       for(int i = 0 ; i < s.length() ; i++){
        char sc = s.charAt(i);
        char tc = t.charAt(i);

        if(mpp.containsKey(sc)){
            if(mpp.get(sc) != tc) return false;
        }
        else if(mpp.containsValue(tc)){
            return false;
        }

        mpp.put(sc,tc);
       }
       return true;
    }
}