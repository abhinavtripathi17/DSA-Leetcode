// Last updated: 8/4/2026, 7:13:25 PM
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
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
        int n = accounts.size();
        DisjointSet ds(n);

        map<string , int>mpp;

        for(int i = 0 ; i < n ; i++){
            for(int j = 1 ; j < accounts[i].size() ; j++){
                string mail = accounts[i][j];
                if(mpp.find(mail) == mpp.end()){
                    mpp[mail] = i;
                }
                else{
                    ds.unionByRank(i , mpp[mail]);
                }
            }
        }

        vector<vector<string>>mergeMail(n);

        for(auto it : mpp){
            int node = ds.findUparent(it.second);
            string mail = it.first;

            mergeMail[node].push_back(mail);
        }

        vector<vector<string>>ans;
        for(int i = 0 ; i < n ; i++){
            if(mergeMail[i].size() == 0) continue;
            sort(mergeMail[i].begin() , mergeMail[i].end());
            vector<string>temp;
            temp.push_back(accounts[i][0]);
            for(auto it : mergeMail[i]){
                temp.push_back(it);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};