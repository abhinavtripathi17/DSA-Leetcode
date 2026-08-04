// Last updated: 8/4/2026, 12:45:38 PM
class Solution {

private:
    int timer = 1;
    void dfs(int node , int parent , vector<vector<int>>&adj , vector<int>&visit , int tn [] , int low [], vector<vector<int>>&bridges){
        visit[node] = 1;
        tn[node] = low[node] = timer;
        timer++;

        for(auto it : adj[node]){
            if(it == parent) continue;

            if(visit[it] == 0){
                dfs(it , node , adj , visit , tn , low , bridges);
                low[node] = min(low[node] , low[it]);

                //check for bridge btw node and it : node ---- it
                if(low[it] > tn[node]){
                    bridges.push_back({it , node});
                }
            }
            else{
                low[node] = min(low[node] , low[it]);              
            }
        }
    }
public:
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        vector<vector<int>>adj(n);
        for(auto it : connections){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);

        }

        vector<int>visit(n, 0);
        int low[n];
        int tn[n];
        vector<vector<int>>bridges;
        dfs(0 , -1 , adj , visit , tn , low , bridges);

        return bridges;


    }
};