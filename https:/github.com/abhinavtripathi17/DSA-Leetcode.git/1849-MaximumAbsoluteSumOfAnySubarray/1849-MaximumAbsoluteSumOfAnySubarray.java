// Last updated: 8/4/2026, 12:42:10 PM
class Solution {
    public int maxAbsoluteSum(int[] nums) {
        int max=Integer.MIN_VALUE,sum=0;
        for(int x:nums){
            sum+=x;
            if(sum<0){
                sum=0;
            }
            max=Math.max(max,sum);
        }
        sum=0;
        for(int x:nums){
            sum+=x;
            if(sum>0){
                sum=0;
            }
            max=Math.max(max,Math.abs(sum));
        }
        return max;
    }
}