// Last updated: 8/4/2026, 7:16:13 PM
class Solution {
    public List<Integer> findAnagrams(String s, String p) {
        int n = s.length();
        int m = p.length();

        int sArr[] = new int [26];
        int pArr[] = new int [26];

        List<Integer>res = new ArrayList<>();
        for(char c : p.toCharArray()){
            pArr[c - 'a']++;
        }

        int l = 0 , r = 0;
        while(r < n){
            sArr[s.charAt(r) - 'a']++;

            if(r - l + 1 > m){
                sArr[s.charAt(l) -'a']--;
                l++;
            }

            if(r - l + 1 == m && Arrays.equals(sArr , pArr)){
                res.add(l);
            }
            
            r++;
        }

        return res;
    }
}