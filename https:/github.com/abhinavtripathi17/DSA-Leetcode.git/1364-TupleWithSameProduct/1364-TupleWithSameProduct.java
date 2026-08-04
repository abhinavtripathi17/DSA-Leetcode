// Last updated: 8/4/2026, 12:45:16 PM
class Solution {
    public int tupleSameProduct(int[] nums) {
        int n = nums.length;
        Map<Integer , Integer>mpp = new HashMap<>();
        int result = 0;

        for(int i = 0 ; i < n ; i++){
            for(int j = i+1 ; j < n ; j++){
                int product = nums[i]*nums[j];

                if(mpp.containsKey(product)){
                    result += 8 * mpp.get(product);
                }

                mpp.put(product , mpp.getOrDefault(product , 0)+1);
            }
        }
        return result;
    }
}