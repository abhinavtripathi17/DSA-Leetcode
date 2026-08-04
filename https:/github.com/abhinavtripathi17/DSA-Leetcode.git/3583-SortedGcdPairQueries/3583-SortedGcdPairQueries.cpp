// Last updated: 8/4/2026, 12:35:56 PM
class Solution {
public:
    vector<int> gcdValues(vector<int>& nums, vector<long long>& queries) {
        
        int n = nums.size();

        int maxi = *max_element(nums.begin() , nums.end());

        vector<int>divisorFreq(maxi+1 , 0);

        for(int i = 0 ; i < n ; i++){
            int num = nums[i];
            for(int j = 1 ; j*j <= num ; j++){
                if(num%j == 0){
                    divisorFreq[j]++;
                    if(num/j != j){
                        divisorFreq[num/j]++;
                    }
                }
            }
        }


        vector<long long>gcdPairs(maxi+1 , 0);

        for(int g = maxi ; g >= 1 ; g--){
            //no. of pairs -> nC2

            long long count = divisorFreq[g];
            long long pairCount = count*(count-1)/2;
            gcdPairs[g] = pairCount;

            //remove duplicated

            for(int multi = 2*g ; multi <= maxi ; multi += g){
                gcdPairs[g] -= gcdPairs[multi];
            }
        }


        vector<long long>prefixGCD(maxi+1 , 0);

        for(int i = 1 ; i <= maxi ; i++){
            prefixGCD[i] = prefixGCD[i-1] + gcdPairs[i];
        }

        vector<int>ans;

        for(int i = 0 ; i < queries.size() ; i++){
            long long target = queries[i];
            int low = 1 ; 
            int high = maxi;
            int temp = 1;

            while(low <= high){
                int mid = low + (high - low)/2;

                if(prefixGCD[mid] > target){
                    temp = mid;
                    high = mid-1;
                }
                else{
                    low = mid + 1;
                }
            }

            ans.push_back(temp);

        }
        return ans;

    }
};