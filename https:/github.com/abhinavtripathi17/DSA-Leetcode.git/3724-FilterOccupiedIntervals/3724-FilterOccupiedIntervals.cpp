// Last updated: 8/4/2026, 12:35:18 PM
class Solution {
public:
    vector<vector<int>>
    filterOccupiedIntervals(vector<vector<int>>& occupiedIntervals,
                            int freeStart, int freeEnd) {

        int n = occupiedIntervals.size();
        sort(occupiedIntervals.begin(), occupiedIntervals.end());

        vector<vector<int>> merge;

        int start = occupiedIntervals[0][0];
        int end = occupiedIntervals[0][1];

        for (int i = 1; i < n; i++) {
            if (occupiedIntervals[i][0] - end <= 1) {
                end = max(end, occupiedIntervals[i][1]);
            } else {
                merge.push_back({start, end});
                start = occupiedIntervals[i][0];
                end = occupiedIntervals[i][1];
            }
        }

        merge.push_back({start, end});

        vector<vector<int>> result;

        for (int i = 0; i < merge.size(); i++) {
            start = merge[i][0];
            end = merge[i][1];
            if (end < freeStart || start > freeEnd) {
                result.push_back({start, end});
            } else {
                if (start < freeStart) {
                    result.push_back({start, freeStart - 1});
                }
                if (end > freeEnd) {
                    result.push_back({freeEnd + 1, end});
                }
            }
        }

        return result;
    }
};