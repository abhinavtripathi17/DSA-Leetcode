// Last updated: 8/4/2026, 7:15:47 PM
class Solution {
public:
    bool predictTheWinner(vector<int>& nums) {
        int n = nums.size();

        if(solve(0 , n-1 , nums) >= 0){
            return true;
        }
        else return false;
        
    }

    int solve(int i , int j , vector<int>& nums){
        if(i == j){
            return nums[i];
        }

        int left = nums[i] - solve(i+1 , j , nums);
        int right = nums[j] - solve(i , j-1 , nums);

        return max(left , right);
    }
};