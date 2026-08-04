// Last updated: 8/4/2026, 12:35:15 PM
class Solution {
public:
    int maximumPossibleSize(vector<int>& nums) {
        int size = 0, prev = -1;

        for (int num : nums) {
            if (num >= prev) {
                prev = num;
                size++;
            }
        }

        return size;
    }
};