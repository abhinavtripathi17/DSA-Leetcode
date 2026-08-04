// Last updated: 8/4/2026, 12:37:09 PM
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n = nums.size();

        map<int , int>mpp;

        for(int i = 0 ; i < n ; i++){
            mpp[nums[i]]++;
        }
        int maxi = -1;
        for(auto it : mpp){
            if(it.second > maxi){
                maxi = it.second;
            }
        }

        int cnt = 0;
        for(auto it : mpp){
            if(it.second == maxi) cnt += it.second;
        }

        return cnt;

    }
};