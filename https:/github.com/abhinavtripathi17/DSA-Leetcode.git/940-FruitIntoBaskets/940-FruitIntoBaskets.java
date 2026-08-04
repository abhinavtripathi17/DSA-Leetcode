// Last updated: 8/4/2026, 7:11:29 PM
class Solution {
    public int totalFruit(int[] fruits) {
        int n = fruits.length;
        Map<Integer,Integer>mpp = new HashMap<>();

        int l = 0 , r = 0;
        int maxi = 0;

        while(r < n){
            mpp.put(fruits[r] , mpp.getOrDefault(fruits[r] , 0)+1);

            while(mpp.size() > 2){
                mpp.put(fruits[l] , mpp.get(fruits[l])- 1);
                if(mpp.get(fruits[l]) == 0){
                    mpp.remove(fruits[l]);
                }
                l++;
            }
            maxi = Math.max(maxi , r-l+1);
            r++;
        }
        return maxi;
    }
}