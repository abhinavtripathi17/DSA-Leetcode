// Last updated: 8/4/2026, 7:12:38 PM
class Solution {
    public int numRabbits(int[] answers) {
        int n = answers.length;

        Map<Integer , Integer>mpp = new HashMap<>();
        for(int ans : answers){
            mpp.put(ans , mpp.getOrDefault(ans , 0)+1);
        }
        int ans = 0;
        for(int map : mpp.keySet()){
            int groupsize = map + 1;
            int freq = mpp.get(map);
            int group = (groupsize + freq -1) / groupsize;
            ans += group*groupsize;

        }
        return ans;
    }
}