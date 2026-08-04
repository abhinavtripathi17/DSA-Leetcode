// Last updated: 8/4/2026, 12:37:33 PM
class Solution {
    public int minAbsoluteDifference(List<Integer> nums, int x) {
        int n = nums.size();
        int mini = Integer.MAX_VALUE;
        TreeSet<Integer>st = new TreeSet<>();

        for(int i = x ; i < n ; i++){
            st.add(nums.get(i-x));

            Integer ceil = st.ceiling(nums.get(i));
            Integer floor = st.floor(nums.get(i));

            if(ceil != null){
                mini = Math.min(mini , Math.abs(nums.get(i) - ceil));
            }
            if(floor != null){
                mini = Math.min(mini , Math.abs(nums.get(i) - floor));
            }
        }
        return mini;
         
    }
}