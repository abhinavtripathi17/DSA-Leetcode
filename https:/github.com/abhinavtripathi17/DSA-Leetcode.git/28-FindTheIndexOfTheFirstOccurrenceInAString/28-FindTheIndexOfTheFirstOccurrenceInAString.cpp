// Last updated: 8/4/2026, 7:25:28 PM
class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.length();
        int m = needle.length();
        for(int i = 0 ; i <= n-m ; i++){
            int j = 0;
            while(j < m && haystack[i+j] == needle[j]){
                j++;
            }
            if(m == j) return i;
        }

        return -1;
    }
};