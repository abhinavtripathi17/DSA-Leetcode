// Last updated: 8/4/2026, 12:44:54 PM
class Solution {
public:
    int sumfn(vector<int>& nums , int div){
        int n = nums.size();
        int sum = 0;
        for(int i=0 ; i<n ; i++){
            sum += ceil(nums[i]/(double)(div));
        }
        return sum;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int low = 1;
        int high = *max_element(nums.begin(),nums.end());
         if (n > threshold) return -1;

        while(low <= high){
            int mid = (low + high) / 2;

            if(sumfn(nums , mid) <= threshold){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
    }
};