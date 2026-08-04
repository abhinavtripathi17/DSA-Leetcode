// Last updated: 8/4/2026, 12:41:18 PM
class Solution {
public:
    bool canReach(string s, int minJump, int maxJump) {

        int n = s.length();

        vector<int> arr(n + 1, 0);

        int count = 0;

        for(int i = 0; i < n; i++) {

            count += arr[i];

            if((i == 0 || count > 0) && s[i] == '0') {

                if(i == n - 1) return true;

                if(i + minJump < n) {
                    arr[i + minJump] += 1;
                }

                if(i + maxJump + 1 < n) {
                    arr[i + maxJump + 1] -= 1;
                }
            }
        }

        return false;
    }
};