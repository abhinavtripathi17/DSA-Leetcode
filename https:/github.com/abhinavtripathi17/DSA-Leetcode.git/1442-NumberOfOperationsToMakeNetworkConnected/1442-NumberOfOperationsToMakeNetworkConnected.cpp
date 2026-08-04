// Last updated: 8/4/2026, 12:44:26 PM
class DisjointSet{
public:
    vector<int>rank , parent;
    DisjointSet(int n){
        rank.resize(n+1 , 0);
        parent.resize(n+1);
        for(int i = 0 ; i <= n ; i++){
            parent[i] = i;
        }
    }
    int findUParent(int node){
        if(parent[node] == node){
            return node;
        }
        return parent[node] = findUParent(parent[node]);
    }
    void unionByRank(int u , int v){
        int pu = findUParent(u);
        int pv = findUParent(v);

        if(pu == pv){
            return ;
        }

        if(rank[pv] > rank[pu]){
            parent[pu] = pv;
        }
        else if(rank[pu] > rank[pv]){
            parent[pv] = pu;
        }
        else{
            parent[pv] = pu;
            rank[pu]++;
        }
    }

};

class Solution {
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
        DisjointSet ds(n);
        int countExtras = 0;

        for(auto it : connections){
            int u = it[0];
            int v = it[1];
            if(ds.findUParent(u) == ds.findUParent(v)){
                countExtras++;
            }
            else{
                ds.unionByRank(u , v);
            }
        }
        int components = 0;

        for(int i = 0 ; i < n ; i++){
            if(ds.parent[i] == i){
                components++;
            }
        }
        int ans = components - 1;
        if(countExtras >= ans){
            return ans;
        }
        return -1;
    }
};