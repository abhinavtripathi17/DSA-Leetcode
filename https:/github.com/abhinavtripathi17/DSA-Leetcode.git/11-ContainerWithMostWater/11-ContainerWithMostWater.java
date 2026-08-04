// Last updated: 8/4/2026, 7:26:25 PM
class Solution {
    public int maxArea(int[] height) {
        int n = height.length;
        int low = 0 ; 
        int high = n-1;

        int area = 0;
        while(low < high){
            if(height[low] < height[high]){
                area = Math.max(area , height[low]*(high - low));
                low++;
            }
            else{
                area = Math.max(area , height[high]*(high - low));
                high--;
            }
        }
        return area;
    }
}