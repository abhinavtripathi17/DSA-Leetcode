// Last updated: 8/4/2026, 7:10:55 PM
class Solution {
    public int[] diStringMatch(String s) {
        int n = s.length();
        int res[] = new int[n+1];
        int low = 0;
        int high = n;

        for(int i = 0 ; i < n ; i++){
            if(s.charAt(i) == 'I'){
                res[i] = low;
                low++;
            }
            else{
                res[i] = high;
                high--;
            }
        }
        res[n] = high;
        return res;
    }
}