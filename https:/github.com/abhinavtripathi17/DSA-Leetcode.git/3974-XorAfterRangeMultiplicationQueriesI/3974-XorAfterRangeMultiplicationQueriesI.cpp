// Last updated: 8/4/2026, 12:33:56 PM
class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        static const int MOD = 1e9+7;
        int q = queries.size();

        for(int i = 0 ; i < q ; i++){
            int l = queries[i][0];
            int r = queries[i][1];
            int k = queries[i][2];
            int v = queries[i][3];

            while(l <= r){
                nums[l] = ((long long)nums[l]*v)%MOD;
                l += k;
            }

        }

        int ans = 0;
        for(int i = 0 ; i < n ; i++){
            ans ^= nums[i];
        }
        return ans;
    }
};