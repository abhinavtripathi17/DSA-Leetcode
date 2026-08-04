// Last updated: 8/4/2026, 12:36:53 PM
class Solution {
public:

    int digit(int n){
        int cnt = 0;
        while(n > 0){
            n = n/10;
            cnt++;
        }
        return cnt;
    }
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        int n = arr1.size();
        int m = arr2.size();

        set<int>st;
        for(int i = 0 ; i < n ; i++){
            int num = arr1[i];
            while(num > 0){
                st.insert(num);
                num = num/10;
            }
        }
        int maxi = 0;
        for(int i = 0 ; i < m ; i++){
            int num = arr2[i];
            while(num > 0){
                if(st.count(num)){
                    maxi = max(maxi , digit(num));
                }
                num = num / 10;
            }
        }
        return maxi;
    }
};