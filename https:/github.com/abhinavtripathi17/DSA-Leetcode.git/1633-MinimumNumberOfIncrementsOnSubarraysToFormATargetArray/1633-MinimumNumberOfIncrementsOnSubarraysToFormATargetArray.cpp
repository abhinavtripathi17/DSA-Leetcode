// Last updated: 8/4/2026, 12:43:13 PM
class Solution {
public:
    int minNumberOperations(vector<int>& target) {
        int n = target.size();
        int ops = 0;

        stack<int>st;
        st.push(0);
        for(int i = 0 ; i < n ; i++){
            if(target[i] > st.top()) {
                ops += target[i] - st.top();
            }
            while(target[i] <= st.top()){
                st.pop();
            }
            st.push(target[i]);
        }
        return ops;
    }
};