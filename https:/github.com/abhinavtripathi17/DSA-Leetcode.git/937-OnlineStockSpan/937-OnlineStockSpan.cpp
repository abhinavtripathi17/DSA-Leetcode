// Last updated: 8/4/2026, 7:11:32 PM
class StockSpanner {
public:

    vector<int>nums;
    stack<int>st;
    int i = 0;
    StockSpanner() {
        
    }
    int next(int price) {

        nums.push_back(price);
        while(!st.empty() && price >= nums[st.top()]){
            st.pop();
        }
        int ans;
        if(st.empty()){
            ans = i+1;
        }
        else{
            ans = i-st.top();
        }
        st.push(i);
        i++;

        return ans;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */