// Last updated: 8/4/2026, 7:19:34 PM
class Solution {
public:
    int reverseBits(int n) {
        int res = 0;
        for(int i = 0 ; i < 32 ; i++){
            res <<= 1;
            res |= (n&1);
            n >>= 1;
        }
        return res;
    }
};