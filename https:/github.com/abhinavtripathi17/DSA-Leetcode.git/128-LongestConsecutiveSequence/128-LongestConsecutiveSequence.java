// Last updated: 8/4/2026, 7:21:29 PM
class Solution {
    public int longestConsecutive(int[] nums) {
        HashSet<Integer>set = new HashSet<>();
        if(nums.length == 0) return 0;

        for(int num : nums){
            set.add(num);
        }
        
        int maxi = 0;
        for(int num :nums){
            if(!set.contains(num - 1)){
                int x = num;
                int count = 1;
                while(set.contains(x+1)){
                    count++;
                    x = x + 1;
                }
                maxi = Math.max(maxi,count);
                
            }
        }
        return maxi;

    }
}