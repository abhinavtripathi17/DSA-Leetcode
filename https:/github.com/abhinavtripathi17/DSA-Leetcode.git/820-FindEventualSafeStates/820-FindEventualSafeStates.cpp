// Last updated: 8/4/2026, 7:12:18 PM
class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        int m = graph[0].size();

        vector<int>check(n , 0);
        vector<int>visit(n , 0);
        vector<int>pathVisit(n , 0);

        for(int i = 0 ; i < n ; i++){
            if(!visit[i]){
                dfs(i , graph , check , visit, pathVisit);
            }
        }

        vector<int>ans;
        for(int i = 0 ; i < n ; i++){
            if(check[i] == 1){
                ans.push_back(i);
            }
        }

        return ans;
    }

    bool dfs(int node , vector<vector<int>>& graph , vector<int>& check , vector<int>& visit , vector<int>& pathVisit){
        visit[node] = 1;
        pathVisit[node] = 1;

        for(auto it : graph[node]){
            if(!visit[it]){
                if(dfs(it , graph , check , visit , pathVisit)){
                    check[node] = -1;
                    return true;
                }
            }
            else if(pathVisit[it]){
                return true;
            }
        }
        pathVisit[node] = 0;
        check[node] = 1;
        return false;
    }
};