// Last updated: 8/4/2026, 7:22:45 PM
class Solution {
    public List<List<Integer>> subsetsWithDup(int[] nums) {
        Arrays.sort(nums);
        int n = nums.length;
        List<List<Integer>>result = new ArrayList<>();
        List<Integer>ll = new ArrayList<>();
        solve(nums , result , 0 , n , ll);
        return result;
    }
    public void solve(int [] nums , List<List<Integer>>result , int i , int n , List<Integer>ll){
        
        result.add(new ArrayList<>(ll));
        
        for(int k = i; k < n; k++) {
            if (k > i && nums[k] == nums[k - 1]) continue;

            ll.add(nums[k]);
            solve(nums , result , k+1 , n , ll);
            ll.remove(ll.size() - 1);
        }
    }
}