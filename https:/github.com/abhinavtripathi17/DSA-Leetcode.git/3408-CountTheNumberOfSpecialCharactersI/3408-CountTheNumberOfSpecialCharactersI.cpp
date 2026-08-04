// Last updated: 8/4/2026, 12:36:34 PM
class Solution {
public:
    int numberOfSpecialChars(string word) {
        set<char>a , b;
        int x = 0;

        for(char c : word) islower(c) ? a.insert(c) : b.insert(c+32);
        for(char c : a) x += b.count(c);

        return x;
    }
};