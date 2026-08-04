// Last updated: 8/4/2026, 7:17:20 PM
class NumArray {
public:
    int prefix[10001];
    NumArray(vector<int>& nums) {
        int n = nums.size();
        prefix[0] = nums[0];
        for(int i = 1 ; i < n ; i++){
            prefix[i] = nums[i] + prefix[i-1];
        }
    }
    
    int sumRange(int left, int right) {
        if(left == 0) return prefix[right];
        return prefix[right] - prefix[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */