// Last updated: 8/4/2026, 12:45:35 PM
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size();
        map<int , int>mpp;

        for(int i = 0 ; i < n ; i++){
            mpp[arr[i]]++;
        }

        set<int>st;

        for(auto it : mpp){
            if(st.count(it.second)){
                return false;
            }
            st.insert(it.second);
        }
        return true;
    }
};