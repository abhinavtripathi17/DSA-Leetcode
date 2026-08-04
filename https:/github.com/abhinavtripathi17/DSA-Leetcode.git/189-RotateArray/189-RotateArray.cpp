// Last updated: 8/4/2026, 7:19:48 PM
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        int arr[n];
        for(int i=0;i<n;i++){
            arr[(k+i)%n]=nums[i];
        }
        for(int i=0;i<n;i++){
            nums[i]=arr[i];
        }
    }
};