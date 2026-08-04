// Last updated: 8/4/2026, 7:09:50 PM
class Solution {
public:

    int noofDays(vector<int>& weights, int cap){
        int days = 1;
        int load = 0;
        int n = weights.size();

        for(int i = 0; i < n; i++){
            if(load + weights[i] > cap){
                days += 1;
                load = weights[i];
            }
            else{
                load += weights[i];
            }
        }
        return days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(),weights.end());
        int high = accumulate(weights.begin(),weights.end(),0);

    /*    for(int i = low ; i <= high ; i++){
            if(noofDays(weights , i) <= days){
                return i;
            }
        }
        return -1;
    }
    */

    while(low <= high){
        int mid = (low + high) / 2;

        if(noofDays(weights , mid) <= days){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return low;
  }
};