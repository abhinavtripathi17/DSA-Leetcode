// Last updated: 8/4/2026, 12:39:02 PM
class Solution {
public:
    int mostBooked(int n, vector<vector<int>>& meetings) {
        sort(meetings.begin(), meetings.end());

        vector<long long> rooms(n, 0);
        vector<int> cnt(n, 0);

        for(auto &m : meetings){
            long long start = m[0];
            long long end = m[1];
            long long duration = end - start;

            int idx = -1;
            long long earliest = LLONG_MAX;

            for(int i = 0; i < n; i++){
                if(rooms[i] <= start){
                    idx = i;
                    break;
                }
                if(rooms[i] < earliest){
                    earliest = rooms[i];
                    idx = i;
                }
            }

            if(rooms[idx] <= start){
                rooms[idx] = end;
            } else {
                rooms[idx] += duration;
            }

            cnt[idx]++;
        }

        int ans = 0;
        for(int i = 1; i < n; i++){
            if(cnt[i] > cnt[ans]){
                ans = i;
            }
        }
        return ans;
    }
};
