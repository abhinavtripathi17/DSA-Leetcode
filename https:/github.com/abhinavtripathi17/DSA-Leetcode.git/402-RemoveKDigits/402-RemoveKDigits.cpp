// Last updated: 8/4/2026, 7:16:37 PM
class Solution {
public:
    string removeKdigits(string num, int k) {
        int n = num.length();
        string str = "";
        stack<char>st;
        if(n == 1 && k == 1){
            return "0";
        }

        for(int i = 0; i < n; i++){
            while(!st.empty() && k > 0 && st.top() > num[i]){
                st.pop();
                k--;
            }
            st.push(num[i]);
        }
        while(k > 0 && !st.empty()){
            st.pop();
            k--;
        }

        while(!st.empty()){
            str += st.top();
            st.pop();
        }

        reverse(str.begin() , str.end());

        int idx = 0;
        while(str[idx] == '0' && idx < n){
            idx++;
        }
        if(idx == n){
            return "0";
        }
        str = str.substr(idx , str.length()-idx);
        if(str == "" ){
            return "0";
        }

        return str;


    }
};