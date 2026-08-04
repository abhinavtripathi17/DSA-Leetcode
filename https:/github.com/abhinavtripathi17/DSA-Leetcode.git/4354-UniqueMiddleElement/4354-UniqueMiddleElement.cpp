// Last updated: 8/4/2026, 12:32:38 PM
class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n = nums.size();
        vector<int>freq(101 , 0);

        int mid = nums[n/2];

        for(int i = 0 ; i < n ; i++){
            freq[nums[i]]++;
        }

        if(freq[mid] == 1) return true;
        return false;
    }
};