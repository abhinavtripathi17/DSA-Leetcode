// Last updated: 9/26/2026, 8:35:08 PM
1class Solution {
2public:
3    int minQueenMoves(vector<int>& source, vector<int>& target) {
4        if(source[0] == target[0] && source[1] == target[1]){
5            return 0;
6        }
7        else if((source[0] == target[0]) || (source[1] == target[1]) || (abs(source[0] - target[0]) == abs(source[1] - target[1]))){
8            return 1;
9        }
10        else{
11            return 2;
12        }
13    }
14};