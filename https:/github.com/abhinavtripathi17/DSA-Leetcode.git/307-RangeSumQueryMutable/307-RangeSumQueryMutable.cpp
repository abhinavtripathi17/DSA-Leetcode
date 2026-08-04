// Last updated: 8/4/2026, 7:17:15 PM
class NumArray {
public:
    int prefix[30001];
    int arr[30001];
    int n;
    NumArray(vector<int>& nums) {
        n = nums.size();
        for(int i= 0 ; i < nums.size() ; i++){
            arr[i] = nums[i];
        }
       prefix[0] = nums[0];
       for(int i = 1 ; i < nums.size() ; i++){
        prefix[i] = nums[i] + prefix[i-1];
       } 
    }
    
    void update(int index, int val) {
        int d = val - arr[index];
        arr[index] = val;

        for(int i = index ; i < n ; i++){
            prefix[i] += d;
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
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */