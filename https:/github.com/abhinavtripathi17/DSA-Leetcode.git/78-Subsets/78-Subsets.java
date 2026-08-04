// Last updated: 8/4/2026, 7:23:16 PM
class Solution {
    public List<List<Integer>> subsets(int[] nums) {
        int n=nums.length;
        List<Integer> ll=new ArrayList<>();
        List<List<Integer>> res=new ArrayList<>();
        solve(nums,n-1,ll,res);
        return res;
    }
    public void solve(int[] nums,int idx,List<Integer> ll,List<List<Integer>> res){
        if(idx < 0){
            res.add(new ArrayList<>(ll));
            return;
        }
        ll.add(nums[idx]);
        solve(nums,idx-1,ll,res);
        ll.remove(ll.size()-1);
        solve(nums,idx-1,ll,res);
    }
}