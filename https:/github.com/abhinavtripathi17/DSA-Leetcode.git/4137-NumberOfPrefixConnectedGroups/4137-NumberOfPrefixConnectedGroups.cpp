// Last updated: 8/4/2026, 12:33:37 PM
class Solution {
public:
    int prefixConnected(vector<string>& words, int k) {
        map<string , int>mpp;
        int cnt = 0;

        for(auto &w : words){
            if(w.length() < k) continue;
            string s = w.substr(0 , k);
            mpp[s]++;
        }
        
        for(auto &it : mpp){
            if(it.second >= 2){
                cnt++;
            }
        }
        return cnt;
    }
};