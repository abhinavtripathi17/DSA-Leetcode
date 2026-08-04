// Last updated: 8/4/2026, 7:21:26 PM
class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        int n = wordList.size();

        unordered_set<string>st;

        for(auto it : wordList){
            st.insert(it);
        }

        queue<pair<string , int>>q;
        q.push({beginWord , 1});

        while(!q.empty()){
            string temp = q.front().first;
            int len = q.front().second;
            q.pop();
            if(temp == endWord){
                return len;
            }

            for(int i = 0 ; i < temp.length() ; i++){
                char ch = temp[i];

                for(char c = 'a' ; c <= 'z' ; c++){
                    temp[i] = c;
                    if(st.find(temp) != st.end()){
                        q.push({temp , len+1});
                        st.erase(temp);
                    }
                }
                temp[i] = ch;
            }
        }
        return 0;
    }
};