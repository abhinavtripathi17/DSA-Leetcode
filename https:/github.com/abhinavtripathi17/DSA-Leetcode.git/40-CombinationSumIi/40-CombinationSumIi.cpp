// Last updated: 8/4/2026, 7:24:58 PM
class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        int n = candidates.size();
        sort(candidates.begin() , candidates.end());
        vector<int>temp;
        vector<vector<int>>ans;

        solve(candidates, target , 0 , n ,temp , ans);
        return ans;
    }

    void solve(vector<int>&candidates , int target , int idx , int n , vector<int>&temp , vector<vector<int>>&ans){
        if(target == 0){
            ans.push_back(temp);
            return;
        }

        for(int i = idx ; i < n ; i++){
            if(i > idx && candidates[i] == candidates[i-1]) continue;

            if(candidates[i] > target) break;

            temp.push_back(candidates[i]);

            solve(candidates , target - candidates[i] , i+1 , n , temp , ans);

            temp.pop_back();
        }
    }
};