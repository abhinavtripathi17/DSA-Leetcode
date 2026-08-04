// Last updated: 8/4/2026, 7:25:08 PM
class Solution {
    public List<List<Integer>> combinationSum(int[] candidates, int target) {
        int n = candidates.length;
        List<Integer>ll = new ArrayList<>();
        List<List<Integer>>result = new ArrayList<>();

        solve(candidates, 0 , target , 0 , n , ll , result);
        return result;
    }
    public void solve(int [] nums , int total ,int target , int i ,int n , List<Integer>ll , List<List<Integer>>result){
        if(total == target){
            result.add(new ArrayList<>(ll));
            return;
        }
        if(total > target || i >= n) return;

        ll.add(nums[i]);
        solve(nums , total + nums[i] , target , i , n , ll , result);
        ll.remove(ll.size()-1);
        solve(nums , total , target , i+1 , n , ll , result);
    }
}