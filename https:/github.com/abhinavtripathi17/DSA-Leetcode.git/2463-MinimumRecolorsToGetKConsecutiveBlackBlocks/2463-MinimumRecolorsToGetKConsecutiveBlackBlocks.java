// Last updated: 8/4/2026, 12:39:10 PM
class Solution {
    public int minimumRecolors(String blocks, int k) {
        int n = blocks.length();
        int j = 0;
        int cnt_min = Integer.MAX_VALUE;
        int operation = 0;

        while(j < n){
            if(j-k >= 0 && blocks.charAt(j-k) == 'B'){
                operation-- ;
            }
            if(blocks.charAt(j) == 'B'){
                operation++;
            }
            cnt_min = Math.min(cnt_min , k - operation);
            j++;
        }
        return cnt_min;
    }
}