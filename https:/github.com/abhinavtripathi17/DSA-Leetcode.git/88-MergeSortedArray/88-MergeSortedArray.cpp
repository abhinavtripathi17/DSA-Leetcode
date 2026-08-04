// Last updated: 8/4/2026, 7:22:48 PM
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int i = m-1 , j = n-1 , k = m + n - 1;

        
        while(i >= 0 && j >= 0){
            if(nums1[i] < nums2[j]){
                nums1[k] = nums2[j];
                j--;
                k--;
            }
            else{
                nums1[k] = nums1[i];
                k--;
                i--;
            }
        }
        while(j >= 0) {
            nums1[k--] = nums2[j--];
        }
        
    }
};