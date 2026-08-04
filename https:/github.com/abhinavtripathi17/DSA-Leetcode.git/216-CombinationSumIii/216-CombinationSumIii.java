// Last updated: 8/4/2026, 7:18:52 PM
class Solution {
    public List<List<Integer>> combinationSum3(int k, int n) {
        int arr[] = new int [9];
        for(int i = 0 ; i < 9 ; i++){
            arr[i] = i+1;
        }
        List<Integer>ll = new ArrayList<>();
        List<List<Integer>>ans = new ArrayList<>();
        solve(arr , k , 0 , n , ans , ll);
        return ans;
    }
    public void solve(int arr[] ,int k ,int idx ,int sum ,List<List<Integer>>ans ,List<Integer>ll){
        if(ll.size() == k && sum == 0){
            ans.add(new ArrayList<>(ll));
            return;
        }
        if(ll.size() >= k) return;
        for(int j = idx ; j < arr.length ; j++){
            if(sum < arr[j]) break;

            ll.add(arr[j]);
            solve(arr , k , j+1 , sum - arr[j] ,ans , ll);
            ll.remove(ll.size()-1);
        }
    }
}