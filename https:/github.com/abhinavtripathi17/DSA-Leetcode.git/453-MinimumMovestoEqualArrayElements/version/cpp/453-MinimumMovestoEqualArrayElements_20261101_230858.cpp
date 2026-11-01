// Last updated: 11/1/2026, 11:08:58 PM
1class Solution {
2public:
3    int minMoves(vector<int>& nums) {
4         int lo = ranges::min(nums), moves = 0;
5        for (int x : nums) moves += x - lo;
6        return moves;
7    }
8};