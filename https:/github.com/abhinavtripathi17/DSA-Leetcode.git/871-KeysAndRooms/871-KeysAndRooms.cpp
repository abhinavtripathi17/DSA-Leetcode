// Last updated: 8/4/2026, 7:12:03 PM
class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        int m = rooms[0].size();

        vector<int>visit(n , 0);
        visit[0] = 1;

        queue<int>q;
        q.push(0);

        while(!q.empty()){
            int node = q.front();
            q.pop();

            for(auto it : rooms[node]){
                if(visit[it] == 0){
                    visit[it]++;
                    q.push(it);
                }
            }
        }

        for(auto it : visit){
            if(it == 0) return false;
        }
        return true;
    }
};