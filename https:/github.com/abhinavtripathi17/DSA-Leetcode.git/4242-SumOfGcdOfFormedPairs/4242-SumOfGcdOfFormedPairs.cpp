// Last updated: 8/4/2026, 12:33:10 PM
class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        long long maxi = INT_MIN;

        vector<int>prefixGcd(n , 0);
        for(int i = 0 ; i < n ; i++){
            if(nums[i] > maxi){
                maxi = nums[i];
            }
            prefixGcd[i] = gcd(nums[i] , maxi);
        }

        sort(prefixGcd.begin() , prefixGcd.end());

        int i = 0 , j = n-1;

        long long sum = 0;
        while(i < j){
            sum += gcd(prefixGcd[i] , prefixGcd[j]);
            i++;
            j--;
        }

        // for(int i = 0 ; i < n ; i++){
        //     cout << prefixGcd[i] << " ";
        // }
        return sum;
    }

    long long gcd(long long a , long long b){
        if(b == 0) return a;
        return gcd(b , a%b);
    }
};