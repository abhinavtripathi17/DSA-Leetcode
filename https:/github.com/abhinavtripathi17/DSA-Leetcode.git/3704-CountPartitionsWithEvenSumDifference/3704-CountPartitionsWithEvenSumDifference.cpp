// Last updated: 8/4/2026, 12:35:27 PM
class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n = nums.size();
        int partition = 0;

        int sum = 0;
        for(int i = 0 ; i < n ; i++){
            sum += nums[i];
        }
        int part_sum = 0;
        for(int i = 0 ; i < n-1 ; i++){
            part_sum += nums[i];
            sum -= nums[i];
            if(part_sum % 2 == 0 && sum % 2 == 0 || part_sum % 2 == 1 && sum % 2 == 1){
                partition++;
            }
        }
        return partition;
    }
};