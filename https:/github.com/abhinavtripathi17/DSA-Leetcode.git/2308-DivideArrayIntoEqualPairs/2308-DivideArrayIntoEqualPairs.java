// Last updated: 8/4/2026, 12:39:48 PM
class Solution {
    public boolean divideArray(int[] nums) {
        HashMap<Integer, Integer>mpp = new HashMap<>();
        for(int i :nums){
            mpp.put(i , mpp.getOrDefault(i , 0)+1);
        }

        for(int num : mpp.values()){
            if(num % 2 != 0){
                return false;
            }
        }
        return true;
    }
}