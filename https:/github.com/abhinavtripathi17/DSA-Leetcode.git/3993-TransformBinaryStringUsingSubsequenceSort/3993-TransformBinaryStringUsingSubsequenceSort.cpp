// Last updated: 8/4/2026, 12:33:53 PM
class Solution {
public:
    vector<bool> transformStr(string s, vector<string>& strs) {
        int n = s.size();
        int ones = 0;
        vector<int> pref(n);

        for (int i = 0; i < n; i++) {
            if (s[i] == '1') ones++;
            pref[i] = ones;
        }

        vector<bool> ans;

        for (string cur : strs) {

            int fixedOnes = 0;
            vector<int> qPos;

            for (int i = 0; i < n; i++) {
                if (cur[i] == '1')
                    fixedOnes++;
                else if (cur[i] == '?')
                    qPos.push_back(i);
            }

            int need = ones - fixedOnes;

            if (need < 0 || need > (int)qPos.size()) {
                ans.push_back(false);
                continue;
            }

            for (int idx : qPos)
                cur[idx] = '0';

            for (int i = (int)qPos.size() - 1; i >= (int)qPos.size() - need; i--)
                cur[qPos[i]] = '1';

            int prefCur = 0;
            bool ok = true;

            for (int i = 0; i < n; i++) {
                if (cur[i] == '1')
                    prefCur++;

                if (prefCur > pref[i]) {
                    ok = false;
                    break;
                }
            }

            ans.push_back(ok);
        }

        return ans;
    }
};