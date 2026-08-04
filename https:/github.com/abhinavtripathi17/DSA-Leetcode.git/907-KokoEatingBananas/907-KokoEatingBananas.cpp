// Last updated: 8/4/2026, 7:11:48 PM
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int low = 1;
        int high = *max_element(piles.begin() , piles.end());
        int ans = 0;

        while(low <= high){
            int mid = (low + high) / 2;
            double hrs = isFeasible(piles , mid);
            if(hrs <= h){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }

    double isFeasible(vector<int>& arr , int k){
        int n = arr.size();
        double hours = 0;
        for(int i = 0 ; i < n ; i++){
            hours += ceil(arr[i] /(double) k);
        }
        return hours;
    }
};