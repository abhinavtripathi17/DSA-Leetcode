// Last updated: 8/4/2026, 12:42:26 PM
class Solution {
public:
    int minimumDeletions(string s) {
        int res = 0, b = 0;

        for (auto& c : s) {
            if (~c & 1) b++;
            else if (b) {
                res++;
                b--;
            }
        }

        return res;
    }
};
