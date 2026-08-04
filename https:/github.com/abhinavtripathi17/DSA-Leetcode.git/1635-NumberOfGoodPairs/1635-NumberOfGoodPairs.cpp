// Last updated: 8/4/2026, 12:43:09 PM
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int good_pairs = 0;
        unordered_map<int,int>hashh;

        for(int num:nums){
            if(hashh.find(num) != hashh.end()){
                good_pairs += hashh[num];
                hashh[num] += 1;
            }
            else{
                hashh[num] += 1;
            }
        }
        return good_pairs;
    }
};