// Last updated: 8/4/2026, 7:12:22 PM
class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int v = graph.size();
        vector<int>path;
        path.push_back(0);
        vector<vector<int>>ans;

        dfs(graph , path , 0 , v , ans);
        return ans;

    }
    void dfs(vector<vector<int>>& adj , vector<int>&path , int node , int v , vector<vector<int>>&ans){
        if(node == v-1){
            ans.push_back(path);
            return;
        }

        for(auto it : adj[node]){
            path.push_back(it);
            dfs(adj , path , it , v , ans);
            path.pop_back();
        }
    }
};