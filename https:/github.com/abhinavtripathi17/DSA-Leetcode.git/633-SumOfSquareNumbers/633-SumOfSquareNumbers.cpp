// Last updated: 8/4/2026, 7:14:15 PM
class Solution {
public:
    bool judgeSquareSum(int c) {
          for (int a = 0; a <= std::sqrt(c); ++a) {
        int bSquared = c - a * a;
        int b = std::sqrt(bSquared);
        if (b * b == bSquared) {
            return true;
        }
    }
    return false;
    }
};