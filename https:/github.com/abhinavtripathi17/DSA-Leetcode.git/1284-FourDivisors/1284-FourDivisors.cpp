// Last updated: 8/4/2026, 7:08:53 PM
class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int n = nums.size();
        int maxsum = 0 ;

        for(int i = 0 ; i < n ; i++){
            int sum = 0;
            int cnt = 0;
            for(int j = 1 ; j*j <= nums[i] ; j++){
                if(nums[i] % j == 0){
                    int x = nums[i]/j;
                    cnt++;
                    sum += j;



                    if(j != x){
                        cnt++;
                        sum += x;
                    }
                    if(cnt > 4) break;
                }
            }
            if(cnt == 4){
                maxsum += sum;
            }
        }
        return maxsum;

    }
};