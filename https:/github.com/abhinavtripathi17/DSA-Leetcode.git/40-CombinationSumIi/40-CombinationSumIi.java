// Last updated: 8/4/2026, 7:25:05 PM
class Solution {
    public List<List<Integer>> combinationSum2(int[] candidates, int target) {
        int n = candidates.length;
        Arrays.sort(candidates);
        List<List<Integer>>result = new ArrayList<>();
        List<Integer>ll = new ArrayList<>();
        solve(candidates , target , n , 0 , result , ll);
        return result;
    }
    public void solve(int arr[] , int target , int n , int idx , List<List<Integer>>result , List<Integer>ll){
        if(target == 0){
            result.add(new ArrayList<>(ll));
            return;
        }

        for(int i = idx ; i < n ; i++){
            if(i > idx && arr[i] == arr[i-1]){
                continue;
            }

            if(arr[i] > target) break;

            ll.add(arr[i]);

            solve(arr , target - arr[i] , n , i + 1 , result , ll);
            ll.remove(ll.size() - 1);
        }
    }
}