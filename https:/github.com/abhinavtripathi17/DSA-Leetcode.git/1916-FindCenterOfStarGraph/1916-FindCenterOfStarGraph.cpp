// Last updated: 8/4/2026, 12:41:39 PM
class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n = edges.size();
        vector<int>visit(n+2 , 0);

        for(int i = 0 ; i < n ; i++){
            visit[edges[i][0]]++;
            visit[edges[i][1]]++;
        }
        int ans = -1;
        for(int i = 1 ; i < visit.size() ; i++){
            if(visit[i] == n){
                ans = i;
            }
        }
        return ans;
    }
};