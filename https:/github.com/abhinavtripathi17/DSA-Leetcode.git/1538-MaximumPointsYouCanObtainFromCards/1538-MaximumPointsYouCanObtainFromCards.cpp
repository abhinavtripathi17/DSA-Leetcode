// Last updated: 8/4/2026, 12:43:39 PM
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int lsum = 0, rsum = 0, r_index = n - 1;
        
        for(int i = 0 ; i < k ; i++){
            lsum += cardPoints[i];
        }
        int maxsum = lsum;

        for(int i = k-1 ; i >= 0 ; i--){
            lsum -= cardPoints[i];
            rsum += cardPoints[r_index];
            r_index--;
            maxsum = max(lsum + rsum , maxsum);
        }
        return maxsum;
    }
};