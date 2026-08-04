// Last updated: 8/4/2026, 7:24:40 PM
class Solution {
    public List<List<Integer>> permute(int[] nums) {
        int n = nums.length;
        List<List<Integer>>res = new ArrayList<>();

        solve(nums , 0 , res);
        return res;
    }
    public void solve(int nums[] , int i , List<List<Integer>>res){
        int n = nums.length;
        if(i == n){
            List<Integer>ll = new ArrayList<>();
            for(int num : nums){
                ll.add(num);
            }
            res.add(new ArrayList<>(ll));
        }
        for(int idx = i ; idx < n ; idx++){
            swap(nums , i , idx);
            solve(nums , i+1 , res);
            swap(nums , i , idx);
        }
    }
    public void swap(int arr[] , int i , int j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}