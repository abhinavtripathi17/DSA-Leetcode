// Last updated: 8/4/2026, 7:26:50 PM
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int l = 0;
        int r = 0;
        int maxLen = 0;
        map<char , int>mpp;

        while(r < n){
            mpp[s[r]]++;
            while(mpp[s[r]] > 1){
                mpp[s[l]]--;
                l++;
            }
            maxLen = max(r - l + 1 , maxLen);
            r++;
        }
        return maxLen;

    }
};