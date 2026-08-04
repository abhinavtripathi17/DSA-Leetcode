// Last updated: 8/4/2026, 12:32:36 PM
class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        int n = nums.size();
        int range = 0;

        for(int i = 0 ; i < n ; i++){
            range = max(maxRange(nums[i]) , range);
        }

        int ans = 0;
        for(int i = 0 ; i < n ; i++){
            if(range == maxRange(nums[i])){
                ans += nums[i];
            }
        }

        return ans;

        
    }
    int maxRange(int x){
        int smallest = 9;
        int largest = 0;

        while(x > 0){
            int digit = x%10;
            if(digit > largest){
                largest = digit;
            }
            if(digit < smallest){
                smallest = digit;
            }
            x = x/10;
        }

        return largest - smallest;
    }
};