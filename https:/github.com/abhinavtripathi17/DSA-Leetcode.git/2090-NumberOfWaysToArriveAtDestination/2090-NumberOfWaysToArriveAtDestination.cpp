// Last updated: 8/4/2026, 12:40:39 PM
class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
        vector<vector<pair<int,int>>>adj(n);
        for(auto it : roads){
            adj[it[0]].push_back({it[1] , it[2]});
            adj[it[1]].push_back({it[0] , it[2]});
        }

        vector<long long> dist(n, 1e18);
        vector<int>ways(n , 0);
        dist[0] = 0;
        ways[0] = 1;
        priority_queue<pair<long long , int> , vector<pair<long long , int>> , greater<pair<long long , int>>>q;
        q.push({0,0});
        static const int MOD = 1e9+7;

        while(!q.empty()){
            long long d = q.top().first;
            int node = q.top().second;
            q.pop();
            for(auto it : adj[node]){
                int newNode = it.first;
                int newD = it.second;
                if(dist[newNode] > d + newD){
                    dist[newNode] = d + newD;
                    q.push({newD + d , newNode});
                    ways[newNode] = ways[node];
                }
                else if(dist[newNode] == d + newD){
                    ways[newNode] = (ways[node] + ways[newNode])%MOD;
                }
            }
        }
        return ways[n-1]%MOD;
    }
};