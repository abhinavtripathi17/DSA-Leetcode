// Last updated: 8/4/2026, 12:33:26 PM
class Solution {
public:
    vector<int> bestTower(vector<vector<int>>& towers, vector<int>& center, int radius) {
        int bestQuality = -1;
        int bestX = -1, bestY = -1;

        for (int i = 0; i < towers.size(); i++) {
            int x = towers[i][0];
            int y = towers[i][1];
            int q = towers[i][2];

            int distance = abs(x - center[0]) + abs(y - center[1]);

            if (distance <= radius) {
                if (q > bestQuality ||
                   (q == bestQuality && (x < bestX || (x == bestX && y < bestY)))) {
                    bestQuality = q;
                    bestX = x;
                    bestY = y;
                }
            }
        }

        if (bestQuality == -1) return {-1, -1};
        return {bestX, bestY};
    }
};