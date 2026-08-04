// Last updated: 8/4/2026, 12:34:47 PM
class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int n = s.length();
        vector<int>pair;

        int oneCnt = 0;
        for(int i = 0 ; i < n ; i++){
            if(s[i] == '1'){
                oneCnt++;
            }
        }

        for(int i = 0 ; i < n ; i++){
            if(s[i] == '0'){
                int start = i;
                while(i < n && s[i] == '0')i++;
                pair.push_back(i-start);
            }
            
        }

        int ans = 0;
        for(int i = 1 ; i < pair.size() ; i++){
            ans = max(ans , pair[i] + pair[i-1]);
        }
        return ans + oneCnt;
    }
};