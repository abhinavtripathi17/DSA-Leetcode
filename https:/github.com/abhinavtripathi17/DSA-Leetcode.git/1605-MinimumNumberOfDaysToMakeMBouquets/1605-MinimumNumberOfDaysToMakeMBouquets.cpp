// Last updated: 8/4/2026, 12:43:21 PM
class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        int ans = -1;
        if((long)m*k > n) return ans;

        int low = *min_element(bloomDay.begin() , bloomDay.end());
        int high = *max_element(bloomDay.begin() , bloomDay.end());

        while(low <= high){
            int mid = (low + high)/2;

            if(isPossible(bloomDay , m , k , mid)){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
    bool isPossible(vector<int>arr , int m , int k , int days){
        int cnt = 0;
        int noOfB = 0;
        for(int i = 0 ; i < arr.size() ; i++){
            if(arr[i] <= days){
                cnt++;
            }
            else{
                noOfB += (cnt / k);
                cnt = 0;
            }
        }
        noOfB += cnt / k;
        if(noOfB >= m) return true;
        else return false;
    }
};