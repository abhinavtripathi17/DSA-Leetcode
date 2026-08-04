// Last updated: 8/4/2026, 7:04:44 PM
class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        int mini = *min_element(nums.begin(), nums.end());
        int maxi = *max_element(nums.begin() , nums.end());

        set<int>st;
        for(auto num : nums){
            st.insert(num);
        }

        vector<int>ans;

        for(int i = mini ; i <= maxi ; i++){
            if(st.find(i) == st.end()){
                ans.push_back(i);
            }
        }

        return ans;
    }
};