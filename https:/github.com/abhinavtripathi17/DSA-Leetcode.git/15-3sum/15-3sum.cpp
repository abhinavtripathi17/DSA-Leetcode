// Last updated: 8/4/2026, 7:26:11 PM
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin() , nums.end());

        vector<vector<int>>res;

        for(int i = 0 ; i < n ; i++){
            int j = i+1 , k = n-1;
            // vector<int>ans;
            if(i > 0 && nums[i] == nums[i-1]){
                continue;
            }

            while(j < k){
                int sum = nums[i] + nums[j] + nums[k];

                if(sum == 0){
                    res.push_back({nums[i] , nums[j] , nums[k]});
                    j++;
                    k--;
                    while(j < k && nums[j] == nums[j-1]){
                        j++;
                    }
                    while(j < k && nums[k] == nums[k+1]){
                        k--;
                    }
                }
                else if(sum < 0){
                    j++; 
                }
                else{
                    k--;
                }
            }
            
        }
        return res;
    }
};