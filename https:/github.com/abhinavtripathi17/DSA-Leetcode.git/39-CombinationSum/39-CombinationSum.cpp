// Last updated: 8/4/2026, 7:25:02 PM
class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n = candidates.size();
        vector<int>temp;
        vector<vector<int>>res;

        solve(candidates , target , n-1 , temp , res);
        return res;
    }

    void solve(vector<int>& candidates, int target, int n , vector<int>&temp , vector<vector<int>>&res){
        if(n < 0 || target < 0){
            return;
        }

        if(target == 0){
            res.push_back(temp);
            return;
        }
        temp.push_back(candidates[n]);
        solve(candidates , target-candidates[n] , n , temp , res);
        temp.pop_back();
        solve(candidates , target ,n-1, temp , res);
    }
};

