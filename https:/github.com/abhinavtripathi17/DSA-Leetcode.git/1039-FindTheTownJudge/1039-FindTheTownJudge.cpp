// Last updated: 8/4/2026, 7:10:06 PM
class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int>visit(n+1 , 0);

        for(int i = 0 ; i < trust.size() ; i++){
            visit[trust[i][0]]--;
            visit[trust[i][1]]++;
        }
        int ans = -1;
        // for(int i = 1 ; i <= n ; i++){
        //     cout << visit[i] << " ";
        // }

        for(int i = 1 ; i <= n ; i++){
            if(visit[i] == n-1){
                ans = i;
            }
        }

        return ans;
    }
};