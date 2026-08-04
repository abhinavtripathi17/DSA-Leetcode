// Last updated: 8/4/2026, 7:13:08 PM
class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int , int>>>adj(n+1);

        for(auto it : times){
            adj[it[0]].push_back({it[1] , it[2]});
        }

        vector<int>dist(n+1 , 1e9);

        dist[k] = 0;

        priority_queue<pair<int , int> , vector<pair<int,int>> , greater<pair<int,int>>>pq;

        pq.push({0, k});

        while(!pq.empty()){
            int d = pq.top().first;
            int node = pq.top().second;
            pq.pop();

            for(auto it : adj[node]){
                int newNode = it.first;
                int newD = it.second;
                if(d + newD < dist[newNode]){
                    dist[newNode] = d+newD;
                    pq.push({d+newD , newNode});
                }
            }
        }

        int maxD = *max_element(dist.begin()+1 , dist.end());
        if(maxD == 1e9) return -1;
        return maxD;
    }
};