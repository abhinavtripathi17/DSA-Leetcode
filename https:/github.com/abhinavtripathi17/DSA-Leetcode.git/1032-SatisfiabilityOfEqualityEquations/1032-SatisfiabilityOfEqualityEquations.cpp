// Last updated: 8/4/2026, 7:10:20 PM
class DisjointSet{
public:
    vector<int>parent , rank;
    DisjointSet(int n){
        parent.resize(n+1);
        rank.resize(n+1 ,0);

        for(int i = 0 ; i <= n ; i++){
            parent[i] = i;
        }
    }

    int findUparent(int node){
        if(parent[node] == node){
            return node;
        }
        return parent[node] = findUparent(parent[node]);
    }

    void unionByRank(int u , int v){
        int pu = findUparent(u);
        int pv = findUparent(v);

        if(pu == pv) return;

        if(rank[pu] > rank[pv]){
            parent[pv] = pu;
        }
        else if(rank[pv] > rank[pu]){
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
    bool equationsPossible(vector<string>& equations) {
        DisjointSet ds(26);

        for(auto it : equations){
            if(it[1] == '='){
                int u = it[0] - 'a';
                int v = it[3] - 'a';

                ds.unionByRank(u , v);
            }
        }
        for(auto it : equations){
            if(it[1] == '!'){
                int u = it[0] - 'a';
                int v = it[3] - 'a';

                if(ds.findUparent(u) == ds.findUparent(v)){
                    return false;
                }
            }
        }
        return true;
    }
};