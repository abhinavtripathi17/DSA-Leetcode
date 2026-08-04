// Last updated: 8/4/2026, 12:41:56 PM
class Solution {
    public int beautySum(String s) {
        int n = s.length();
        int cnt = 0;
        
        for(int i = 0 ; i < n ; i++){
            int arr[] = new int[26];
            for(int j = i ; j < n ; j++){
                char ch = s.charAt(j);
                arr[ch - 'a']++;
                int maxi = Integer.MIN_VALUE;
                int mini = Integer.MAX_VALUE;
                for(int k = 0 ; k < 26 ; k++){
                    if(arr[k] > 0){
                        maxi = Math.max(maxi , arr[k]);
                        mini = Math.min(mini , arr[k]);
                    }
                }
                cnt += maxi - mini;
            }
        } 
        return cnt;
    }
}