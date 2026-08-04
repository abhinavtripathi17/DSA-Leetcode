// Last updated: 8/4/2026, 7:18:43 PM
class Solution {
    public boolean containsDuplicate(int[] nums) {
        HashSet<Integer>freq = new HashSet<>();

        for(int num : nums){
            if(freq.contains(num)) return true;

            freq.add(num);
        }
        return false;
    }
}