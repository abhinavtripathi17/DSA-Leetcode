// Last updated: 8/4/2026, 7:25:10 PM
class Solution {
public:

     int findfirstpos(vector<int> &nums , int target){
        int start = 0;
        int end = nums.size() - 1;
        int index = -1;

        while(start <= end){
            int mid = (start + end) / 2;

            if(target == nums[mid]){
                index = mid;
                end = mid - 1;
            }

            else if(target > nums[mid]){
                start = mid + 1;
            }

            else{
                end = mid - 1;
            }
        }
            return index;
        }


        int findlastpos(vector<int> &nums , int target){
        int start = 0;
        int end = nums.size() - 1;
        int index = -1;

        while(start <= end){
            int mid = (start + end) / 2;

            if(target == nums[mid]){
                index = mid;
                start = mid + 1;
            }

            else if(target > nums[mid]){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
            return index;
        }

    vector<int> searchRange(vector<int>& nums, int target) {
        int firstpos = -1;
        int lastpos = -1;

        firstpos = findfirstpos(nums , target);
        lastpos =   findlastpos(nums , target);

        return {firstpos , lastpos};

    }
};