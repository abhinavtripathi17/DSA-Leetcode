// Last updated: 8/4/2026, 7:25:54 PM
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        solve(0, 0 ,"", n ,  ans);
        return ans;
    }
    void solve(int op ,int cl,  string s ,int n ,vector<string>& ans){
        
        if(op == n && cl == n){
            ans.push_back(s);
            return;
        }

        if(op < n){
            solve(op+1 , cl , s+"(" , n , ans);
        }
        if(cl < op){
            solve(op , cl+1 , s + ")" , n , ans);
        }
    }
};