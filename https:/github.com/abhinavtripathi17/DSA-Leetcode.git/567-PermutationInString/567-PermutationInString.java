// Last updated: 8/4/2026, 7:14:57 PM
class Solution {
    public boolean checkInclusion(String s1, String s2) {
        int n = s1.length();
        int m = s2.length();

        int arr1[] = new int [26];
        int arr2[] = new int [26];

        for(char c : s1.toCharArray()){
            arr1[c - 'a']++;
        }

        int l = 0 , r = 0;
        while(r < m){
            arr2[s2.charAt(r) - 'a']++;

            if(r - l + 1 > n){
                arr2[s2.charAt(l) - 'a']--;
                l++;
            }

            if(r - l + 1 == n && Arrays.equals(arr1 , arr2)){
                return true;
            }
            r++;
        }
        return false;
    }
}