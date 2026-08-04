// Last updated: 8/4/2026, 7:10:35 PM
class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
     unordered_set<int> st;
        for (int x : nums) {
            if (st.count(x)) return x;
            st.insert(x);
        }
        return -1;
    }
};