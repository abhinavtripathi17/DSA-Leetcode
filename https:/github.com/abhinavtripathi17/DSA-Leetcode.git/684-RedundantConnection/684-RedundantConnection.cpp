// Last updated: 8/4/2026, 7:13:46 PM
class DisjointSet{
public:
    vector<int>parent , rank;
    DisjointSet(int n){
        parent.resize(n+1);
        rank.resize(n+1 , 0);

        for(int i = 0 ; i <= n ; i++){
            parent[i] = i;
        }
    }

    int findUparent(int node){
        if(node == parent[node]){
            return node;
        }
        return parent[node] = findUparent(parent[node]);
    }

    void unionByRank(int u , int v){
        int pu = findUparent(u);
        int pv = findUparent(v);

        if(pu == pv){
            return;
        }
        if(rank[pu] > rank[pv]){
            parent[pv] = pu;
        }
        else if(rank[pu] < rank[pv]){
            parent[pu] = pv;
        }
        else{
            parent[pv] = pu;
            rank[pu]++;
        }
    }
};
class Solution {
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n = edges.size();
        DisjointSet ds(n);
        vector<int>res(2);
        for(auto it : edges){
            int u = it[0];
            int v = it[1];

            if(ds.findUparent(u) == ds.findUparent(v)){
                res[0] = u ;
                res[1] = v;
            }
            else{
                ds.unionByRank(u , v);
            }
        }
        return res;
    }
};