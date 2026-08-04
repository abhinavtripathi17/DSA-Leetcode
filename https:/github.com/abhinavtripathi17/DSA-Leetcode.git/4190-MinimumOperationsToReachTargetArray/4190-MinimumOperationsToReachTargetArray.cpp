// Last updated: 8/4/2026, 12:33:24 PM
class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& target) {
        int n = nums.size();
        unordered_set<int>st;
        int ops = 0;
        for(int i = 0 ; i < n ; i++){
            if(nums[i] != target[i]){
                if(st.find(nums[i]) != st.end()){
                    continue;
                }
                ops++;
                st.insert(nums[i]);
                
            }
            
        }
        return ops;
    }
};