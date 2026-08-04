// Last updated: 8/4/2026, 12:35:51 PM
class Solution {
    public int possibleStringCount(String word) {
        int n = word.length();
        int cnt = 1;
        // HashMap<Character, Integer>mpp = new HashMap<>();

        // for(int i = 0 ; i < n ; i++){
        //     mpp.put(word.charAt(i) , mpp.getOrDefault(word.charAt(i) , 0)+1);
        // }

        // for(int k : mpp.values()){
        //     if(k >= 2){
        //         cnt += k-1;
        //     }
        // }
        for(int i = 0 ; i < n-1 ; i++){
            if(word.charAt(i) == word.charAt(i+1)) 
                cnt++;
        }
        return cnt;
    }
}