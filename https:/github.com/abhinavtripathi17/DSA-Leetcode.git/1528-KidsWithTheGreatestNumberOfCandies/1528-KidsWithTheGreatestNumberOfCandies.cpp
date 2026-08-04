// Last updated: 8/4/2026, 12:43:50 PM
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        vector<bool>result(n , false);

        int maxi = *max_element(candies.begin() , candies.end());


        for(int i = 0 ; i < n ; i++){
            if(candies[i] + extraCandies >= maxi){
                result[i] = true;
            }
        }

        return result;

    }
};