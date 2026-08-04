// Last updated: 8/4/2026, 12:42:05 PM
class Solution {
public:
    string largestMerge(string word1, string word2) {
        int n = word1.length();
        int m = word2.length();

        int i = 0 , j = 0;
        string merge = "";

        while(i < n && j < m){
            if(word1.substr(i) > word2.substr(j)){
                merge += word1[i];
                i++;

            }
            else{
                merge += word2[j];
                j++;
            }
        }
        while(i < n){
            merge += word1[i];
            i++;
        }
        while(j < m){
            merge += word2[j];
            j++;
        }
        return merge;
    }
};