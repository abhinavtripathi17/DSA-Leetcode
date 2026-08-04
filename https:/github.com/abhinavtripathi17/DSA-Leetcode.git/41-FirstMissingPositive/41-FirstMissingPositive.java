// Last updated: 8/4/2026, 7:24:51 PM
class Solution {
    public int firstMissingPositive(int[] nums) {
        Set<Integer>st = new HashSet<>();

        for(int num : nums){
            st.add(num);
        }
        int cnt = 1;

        while(st.contains(cnt)){
            cnt++;
        }
        return cnt;
    }
}