// Last updated: 8/4/2026, 7:09:09 PM
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        int max = arr[n - 1];
        vector<int> result(n);
        result[n - 1] = -1; 
        
        for(int i = n - 2; i >= 0; i--) {
            result[i] = max;
            if(arr[i] > max) {
                max = arr[i];
            }
        }
        
        return result;
    }
};
