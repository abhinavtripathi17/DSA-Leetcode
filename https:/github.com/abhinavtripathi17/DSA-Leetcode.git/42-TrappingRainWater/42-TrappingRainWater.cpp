// Last updated: 8/4/2026, 7:24:46 PM
class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int leftMax = 0 , rightMax = 0 , l = 0 , r = n-1;
        int trappedRain = 0;

        while(l < r){
            if(height[l] <= height[r]){
                if(leftMax > height[l]){
                    trappedRain += leftMax - height[l];
                }
                else{
                    leftMax = height[l];
                }
                l++;
            }
            else{
                if(rightMax > height[r]){
                    trappedRain += rightMax - height[r];
                }
                else{
                    rightMax = height[r];
                }
                r--;
            }
        }
        return trappedRain;
    }
};