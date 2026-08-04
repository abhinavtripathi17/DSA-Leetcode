// Last updated: 8/4/2026, 12:37:28 PM
class Solution {
public:
    long long maximumSumOfHeights(vector<int>& heights) {
        int n = heights.size();
        long long ans = 0;
        for(int i = 0 ; i < n ; i++){
            int peak = heights[i];
            long long sum = heights[i];

            for(int j = i-1 ; j >= 0 ; j--){
                peak = min(heights[j] , peak);
                sum += peak;
            }
            peak = heights[i];
            for(int j = i+1 ; j < n ; j++){
                peak = min(heights[j] , peak);
                sum += peak;
            }
            ans = max(ans , sum);
        }
        return ans;
    }
};