// Last updated: 8/4/2026, 7:09:29 PM
class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>check = heights;
        int n = check.size();
        sort(check.begin(),check.end());
        int count = 0;
        for(int i=0;i<n;i++){
            if(heights[i]!=check[i]) count++;
        }
        return count;
    }
};