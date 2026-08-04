// Last updated: 8/4/2026, 12:32:39 PM
class Solution {
public:
    bool canReach(vector<int>& start, vector<int>& target) {
        
        bool startColor =
            (start[0] % 2 == start[1] % 2);

        bool targetColor =
            (target[0] % 2 == target[1] % 2);

        return startColor == targetColor;

    }
};