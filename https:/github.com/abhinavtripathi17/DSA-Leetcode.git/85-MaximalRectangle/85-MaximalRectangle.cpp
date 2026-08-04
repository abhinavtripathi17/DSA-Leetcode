// Last updated: 8/4/2026, 7:22:58 PM
class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int ans = 0;
        vector<vector<int>>v(n , vector<int>(m , 0));

        for(int j = 0 ; j < m ; j++){
            int sum = 0;
            for(int i = 0 ; i < n ; i++){
                if(matrix[i][j] == '1')
                sum ++;

                if(matrix[i][j] == '0'){
                    sum = 0;
                }
                v[i][j] = sum;
            }
            
        }
        for(int i = 0 ; i < n ; i++){
            int area = histogram(v[i]);
            ans = max(ans , area);
        }
        return ans;
    }
    int histogram(vector<int>&arr){
        arr.push_back(0);
        int n = arr.size();
        stack<int>st;
        

        int maxArea = 0;

        for(int i = 0 ; i < n ; i++){
            while(!st.empty() && arr[st.top()] > arr[i]){
                int height = arr[st.top()];
                st.pop();

                int width = st.empty() ? i : i - st.top() - 1;
                maxArea = max(maxArea , height * width);
            }
            st.push(i);
        }
        arr.pop_back();
        return maxArea;
    }
};