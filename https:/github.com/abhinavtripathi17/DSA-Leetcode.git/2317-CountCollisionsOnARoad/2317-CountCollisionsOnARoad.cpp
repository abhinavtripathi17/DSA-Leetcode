// Last updated: 8/4/2026, 12:39:45 PM
class Solution {
public:
    int countCollisions(string directions) {
        int collisions = 0;
        stack<char> st;

        for (int i = 0; i < directions.length(); i++) {
            char cur = directions[i];
            bool alive = true;

            while (!st.empty() && alive) {

                if (st.top() == 'R' && cur == 'L') {
                    st.pop();
                    collisions += 2;
                    cur = 'S';              // current survives as S
                }
                else if (st.top() == 'R' && cur == 'S') {
                    st.pop();
                    collisions += 1;
                }
                else if (st.top() == 'S' && cur == 'L') {
                    collisions += 1;
                    alive = false;          // current L destroyed
                }
                else {
                    break;
                }
            }

            if (alive) {
                st.push(cur);
            }
        }
        return collisions;
    }
};
