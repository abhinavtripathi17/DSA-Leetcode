// Last updated: 8/4/2026, 12:36:37 PM
class Solution {
public:
    int numberOfSpecialChars(string word) {
        map<char , int>wordLower , wordUpper;

        for(int i = 0 ; i < word.length() ; i++){
            if(islower(word[i])){
                wordLower[word[i]] = i;
            }
        }
        for(int i = word.length()-1 ; i >= 0 ; i--){
            if(isupper(word[i])){
                wordUpper[word[i]] = i;
            }
        }
        int cnt = 0;
        for(auto it : wordLower){
            char upperChar = toupper(it.first);
            if(wordUpper.find(upperChar) != wordUpper.end()){
                if(it.second < wordUpper[upperChar]){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};