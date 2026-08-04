// Last updated: 8/4/2026, 12:36:12 PM
class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        int n = nums.size();
        vector<double>averages;
        if(n==0) return 0.0;
        
        sort(nums.begin(),nums.end());
        
        double minAvg = INT_MAX;

        for(int i=0;i<n/2;i++){
            
           double avg = (nums[i] + nums[n-1-i])/2.0;
             averages.push_back(avg);
            
        }
        return *min_element(averages.begin(),averages.end());
        
    }
};