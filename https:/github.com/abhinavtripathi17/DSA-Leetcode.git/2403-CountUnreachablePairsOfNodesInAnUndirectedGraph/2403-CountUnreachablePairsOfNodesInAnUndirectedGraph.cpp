// Last updated: 8/4/2026, 12:39:22 PM
class Solution {
public:
    long long countPairs(int n, vector<vector<int>>& edges) {
        vector<vector<int>>adj(n);
        for(int i = 0 ; i < edges.size() ; i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }

        vector<int>visit(n , 0);
        long long ans = 0 , rem = n;

        for(int i = 0 ; i < n ; i++){
            if(!visit[i]){
                int cnt = 1;
                queue<int>q;
                q.push(i);
                visit[i] = 1;

                while(!q.empty()){
                    int node = q.front();
                    q.pop();
                    for(auto it : adj[node]){
                        if(!visit[it]){
                            visit[it] = 1;
                            q.push(it);
                            cnt++;
                        }
                    }
                }
                ans += cnt * (rem-cnt);
                rem = rem - cnt;
            }
            
        }
        return ans;
        
    }
};