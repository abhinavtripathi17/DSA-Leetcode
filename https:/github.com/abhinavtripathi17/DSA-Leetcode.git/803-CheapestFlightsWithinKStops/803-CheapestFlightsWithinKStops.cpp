// Last updated: 8/4/2026, 7:12:35 PM
class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<vector<pair<int , int>>>adj(n);
        for(auto it : flights){
            adj[it[0]].push_back({it[1] , it[2]});
        }

        queue<pair<int , pair<int,int>>>q;
        q.push({0 , {0 , src}});

        vector<int>dist(n , 1e9);
        dist[src] = 0;

        while(!q.empty()){
            int steps = q.front().first;
            int d = q.front().second.first;
            int node = q.front().second.second;
            q.pop();

            if(steps > k) continue;

            for(auto it : adj[node]){
                if(dist[it.first] > d + it.second && steps <= k){
                    dist[it.first] = d + it.second;
                    q.push({steps+1 , {it.second + d , it.first}});
                }
            }
        }

        if(dist[dst] == 1e9) return -1;
        else return dist[dst];
    }
};