// Last updated: 8/4/2026, 12:33:21 PM
class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        int n1 = words.size();
        string str = "";

        for(int i = 0 ; i < n1 ; i++){
            string s = words[i];
            int sum = 0;
            for(int j = 0 ; j < s.length() ; j++){
                sum += weights[s[j] - 'a'];
            }
            // cout << sum << endl;
            
            char ch = 'z' - (sum % 26);
            // cout << ch <<endl;
            str.push_back(ch);
        }
        return str;
    }
};