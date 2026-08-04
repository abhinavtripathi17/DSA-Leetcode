// Last updated: 8/4/2026, 12:40:37 PM
class Solution {
public:
    int findGCD(vector<int>& nums) {
        int smallest = INT_MAX;
        int largest = INT_MIN;

        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] < smallest){
                smallest = nums[i];
            }
            if(nums[i] > largest){
                largest = nums[i];
            }
        }

        return __gcd(smallest , largest);
    }
};