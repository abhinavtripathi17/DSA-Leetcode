// Last updated: 8/4/2026, 7:19:51 PM
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int maj = nums[0];
        int cnt = 1;

        int i = 1;
        while(i < n){
            if(maj != nums[i]){
                cnt--;
                if(cnt == 0){
                    maj = nums[i];
                    cnt = 1;
                }
            }
            else{
                cnt++;
            }
            i++;
        }
        return maj;
    }
};