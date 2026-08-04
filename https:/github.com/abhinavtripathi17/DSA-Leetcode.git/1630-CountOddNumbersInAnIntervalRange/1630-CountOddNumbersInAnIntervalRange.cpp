// Last updated: 8/4/2026, 7:08:00 PM
class Solution {
public:
    int countOdds(int low, int high) {
        int total = high - low + 1;
        if(low % 2 != 0 && high % 2 != 0) return (total)/2 + 1;
        return total/2;
    }
};