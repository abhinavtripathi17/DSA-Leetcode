// Last updated: 8/4/2026, 12:40:12 PM
class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n = nums.size();
        vector<long long>pse(n , 0);
        vector<long long>nse(n , 0);
        vector<long long>pge(n , 0);
        vector<long long>nge(n , 0);
        stack<int>st;

        for(int i = 0 ; i < n ; i++){
            while(!st.empty() && nums[st.top()] > nums[i]){
                st.pop();
            }

            pse[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        while(!st.empty()) st.pop();

        for(int i = n-1 ; i >= 0 ; i--){
            while(!st.empty() && nums[st.top()] >= nums[i]){
                st.pop();
            }
            nse[i] = st.empty() ? n : st.top();
            st.push(i);

        }
        while(!st.empty()) st.pop();

        for(int i = 0 ; i < n ; i++){
            while(!st.empty() && nums[st.top()] < nums[i]){
                st.pop();
            }

            pge[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        while(!st.empty()) st.pop();
        for(int i = n-1 ; i >= 0 ; i--){
            while(!st.empty() && nums[st.top()] <= nums[i]){
                st.pop();
            }
            nge[i] = st.empty() ? n : st.top();
            st.push(i);

        }
        // for(int i = 0 ; i < n ; i++){
        //     cout << nse[i] << " ";
        // }


        long long ans = 0;
        long long minimum = 0;
        long long maximum = 0;
        for(int i = 0 ; i < n ; i++){
            int left1 = i - pse[i];
            int right1 = nse[i] - i;
            minimum += (long long)left1*right1*nums[i];
            int left2 = i - pge[i];
            int right2 = nge[i] - i;
            maximum += (long long)left2*right2*nums[i];
        }
        return maximum - minimum;
    }
};