// Last updated: 8/4/2026, 7:21:14 PM
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = cost.size();
        int totalGas = 0;
        int curr = 0;
        int start = 0;
        
        for(int i = 0 ; i < n ; i++){
            int diff = gas[i] - cost[i];
            totalGas += diff;
            curr += diff;

            if(curr < 0){
                start = i+1;
                curr = 0;
            }
        }
        if(totalGas >= 0) return start;
        return -1;
    }
};