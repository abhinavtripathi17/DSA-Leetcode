// Last updated: 8/4/2026, 7:12:06 PM
class DisjointSet{
public:
    vector<int>parent , size , rank;
    DisjointSet(int n){
        parent.resize(n+1);
        size.resize(n+1 , 1);
        rank.resize(n+1 , 0);

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
    
    void unionBySize(int u , int v){
        int pu = findUparent(u);
        int pv = findUparent(v);

        if(pu == pv) return;

        if(size[pu] < size[pv]){
            parent[pu] = pv;
            size[pv] += size[pu];
        }
        else{
            parent[pv] = pu;
            size[pu] += size[pv];
        }
    }
};
class Solution {
public:
    int largestIsland(vector<vector<int>>& grid) {
        int n = grid.size();

        DisjointSet ds(n*n);

        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                if(grid[i][j] == 0) continue;

                int d_row[] = {-1 , 0 , 1 , 0};
                int d_col[] = {0 , 1 , 0 , -1};

                for(int idx = 0 ; idx < 4 ; idx++){
                    int r = i + d_row[idx];
                    int c = j + d_col[idx];
                    if(r < n && c < n && r >= 0 && c >= 0 && grid[r][c] == 1){
                        int nodeNo = (i*n)+j;
                        int adjNode = (r*n)+c;
                        ds.unionBySize(nodeNo , adjNode);
                    }
                }
            }
        }
        int ans = 0;

        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                if(grid[i][j] == 1) continue;

                int d_row[] = {-1 , 0 , 1 , 0};
                int d_col[] = {0 , 1 , 0 , -1};
                set<int>st;
                for(int idx = 0 ; idx < 4 ; idx++){
                    int r = i + d_row[idx];
                    int c = j + d_col[idx];
                    if(r < n && c < n && r >= 0 && c >= 0 ){
                        if(grid[r][c] == 1){
                            st.insert(ds.findUparent(r*n+c));
                        }
                    }
                }
                int size = 1;
                for(auto it : st){
                    size += ds.size[it];
                }
                ans = max(ans , size);

            }
        }
         // Edge case: all 1s
        for(int i = 0 ; i < n*n ; i++){
            if(ds.findUparent(i) == i){
                ans = max(ans , ds.size[i]);
            }
        }
        return ans;
    }
};