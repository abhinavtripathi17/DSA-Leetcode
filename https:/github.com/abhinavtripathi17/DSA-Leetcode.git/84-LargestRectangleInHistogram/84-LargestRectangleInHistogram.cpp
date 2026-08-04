// Last updated: 8/4/2026, 7:23:01 PM
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        int maxarea = 0;

        vector<int>leftmin(n) , rightmin(n);
        stack<int>st;

        for(int i = 0 ; i < n ; i++){
            while(!st.empty() && heights[st.top()] >= heights[i]){
                st.pop();
            }

            leftmin[i] = st.empty() ? 0 : st.top()+1;

            st.push(i); 
        }
        while(!st.empty()){
            st.pop();
        }

        for(int i = n-1 ; i >= 0 ; i--){
            while(!st.empty() && heights[st.top()] >= heights[i]){
                st.pop();
            }

            rightmin[i] = st.empty() ? n-1 : st.top() - 1;

            st.push(i);
        }

        for(int i = 0 ; i < n ; i++){
            int width = rightmin[i] - leftmin[i] + 1;
            maxarea = max(maxarea , width * heights[i]);
        }

        return maxarea;
    }
};