// Last updated: 8/4/2026, 12:42:42 PM
class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n = points.size();
        vector<int>visit(n , 0);
        priority_queue<pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>>>pq;
        int sum = 0;
        pq.push({0 , 0});
        while(!pq.empty()){
            int node = pq.top().second;
            int wt = pq.top().first;
            pq.pop();

            if(visit[node] == 1) continue;
            visit[node] = 1;
            sum += wt;

            for(int i = 0 ; i < n ; i++){
                if(!visit[i]){
                    int dist = abs(points[node][0] - points[i][0]) + abs(points[node][1] - points[i][1]);
                    pq.push({dist , i});
                }
            }
        }
        return sum;
    }
};