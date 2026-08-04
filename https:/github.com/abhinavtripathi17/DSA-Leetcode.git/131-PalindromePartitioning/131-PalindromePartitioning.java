// Last updated: 8/4/2026, 7:21:17 PM
class Solution {
    public List<List<String>> partition(String s) {
        int n = s.length();
        List<List<String>>result = new ArrayList<>();
        List<String>ll = new ArrayList<>();
        solve(s , 0 , result , ll);
        return result;
    }

    public void solve(String s , int i , List<List<String>>result , List<String>ll){
        if(i == s.length()){
            result.add(new ArrayList<>(ll));
            return;
        }

        for(int k = i ; k < s.length() ; k++){
            if(isPalindrome(s , i , k)){
                ll.add(s.substring(i , k+1));
                solve(s , k+1 , result , ll);
                ll.remove(ll.size() - 1);
            }

        }
    }

    public boolean isPalindrome(String s , int i , int j){
        while(i <= j){
            if(s.charAt(i) == s.charAt(j)){
                i++;
                j--;
            }
            else return false;
        }
        return true;
    }
}