// Last updated: 8/4/2026, 7:13:19 PM
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n = asteroids.size();
        vector<int>res;
        stack<int>st;
        

        for(int i = 0 ; i < n ; i++){
            bool destroyed = false;
            while(!st.empty() && st.top() > 0 && asteroids[i] < 0){
                if((abs(st.top())) < (abs(asteroids[i]))){
                    st.pop();
                }
                else if((abs(st.top())) == (abs(asteroids[i]))){
                    st.pop();
                    destroyed = true;
                    break; //both will explode
                }
                else{
                    destroyed = true;
                    break; //asteroids[i] will explode, so break and move to next
                }

            }
            if(!destroyed){
                st.push(asteroids[i]);
            }
        }
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }

        reverse(res.begin(), res.end());
        return res;

    }
};