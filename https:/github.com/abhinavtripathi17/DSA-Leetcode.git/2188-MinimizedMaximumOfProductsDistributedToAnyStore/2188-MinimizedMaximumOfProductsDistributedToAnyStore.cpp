// Last updated: 8/4/2026, 12:40:24 PM
class Solution {
public:

    int noofStores(int product , vector<int>quantities){
        int distributers = 0;
        for(int i = 0 ; i < quantities.size() ; i++){
            distributers += (quantities[i] + product - 1 )/product;
        }
        return distributers;
    }

    int minimizedMaximum(int n, vector<int>& quantities) {
        int low = 1;
        int high = *max_element(quantities.begin(),quantities.end());

        while(low <= high){
            int mid = (low + high) / 2;
            
            if(noofStores(mid , quantities) <= n){
                high = mid - 1;
            }
        else{
            low = mid + 1;
        }
        }
        return low;
    }
};