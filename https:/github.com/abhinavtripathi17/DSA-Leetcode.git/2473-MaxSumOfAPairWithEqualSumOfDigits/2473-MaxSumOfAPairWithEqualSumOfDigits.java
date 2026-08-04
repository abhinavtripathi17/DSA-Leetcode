// Last updated: 8/4/2026, 12:39:07 PM
class Solution {
    public int maximumSum(int[] nums) {
        int n = nums.length;
        HashMap<Integer , Integer>mpp = new HashMap<>();
        int maxi = -1;

        for(int i = 0 ; i < n ; i++){
            int digitcnt = 0;
            int nii = nums[i];
            while(nii > 0){
                digitcnt += nii % 10;
                nii /= 10;
            }
            if(mpp.containsKey(digitcnt)){
                int num1 = mpp.get(digitcnt);
                int num2 = nums[i];
                maxi = Math.max(num1+num2 , maxi);
            }
            mpp.put(digitcnt, Math.max(mpp.getOrDefault(digitcnt, 0), nums[i]));
        }
        return maxi;
    }
}