// Last updated: 8/4/2026, 7:18:36 PM
class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n > 0 && (n & n - 1) == 0;
    }
};