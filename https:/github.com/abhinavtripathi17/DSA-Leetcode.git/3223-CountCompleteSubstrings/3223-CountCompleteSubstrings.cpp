// Last updated: 8/4/2026, 12:37:12 PM
class Solution {
public:
    int countCompleteSubstrings(string word, int k) {
        int n = word.length();
        int ans = 0;
        int start = 0;

        for(int i = 1 ; i <= n ; i++){
            if(i == n || abs(word[i] - word[i-1]) > 2){
                ans += solve(start , i-1 , word , k);
                start = i;
            }
        }

        return ans;
    }

    int solve(int start , int end , string &word , int &k){
        int result = 0;

        for(int uniqueChar = 1 ; uniqueChar*k <= end-start+1 && uniqueChar <= 26 ; uniqueChar++){
            vector<int>freq(26 , 0);

            int l = start , r = start;

            int goodStr = 0;
            while(r <= end){
                char ch = word[r];

                freq[ch - 'a']++;

                if(freq[ch - 'a'] == k){
                    goodStr += 1;
                }
                else if(freq[ch - 'a'] == k+1){
                    goodStr -= 1;
                }

                if(r-l+1 > uniqueChar*k){
                    if(freq[word[l] - 'a'] == k+1){
                        goodStr += 1;
                    }
                    else if(freq[word[l] - 'a'] == k){
                        goodStr -= 1;
                    }
                    freq[word[l] - 'a']--;
                    l++;
                }

                if(goodStr == uniqueChar){
                    result++;
                }

                r++;
            }
        }
        return result;
    }
};