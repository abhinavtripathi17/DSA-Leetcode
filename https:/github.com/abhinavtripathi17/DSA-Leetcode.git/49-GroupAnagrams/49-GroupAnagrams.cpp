// Last updated: 8/4/2026, 7:24:25 PM
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        map<string , vector<string>>mpp;

        for(int i = 0 ; i < n ; i++){
            string word = strs[i];
            sort(word.begin() , word.end());
            mpp[word].push_back(strs[i]);
        }

        vector<vector<string>>ans;
        for(auto it : mpp){
            ans.push_back(it.second);
        }
        return ans;
    }
};