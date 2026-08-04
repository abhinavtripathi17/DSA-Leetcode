// Last updated: 8/4/2026, 7:12:25 PM
class Solution {
    public boolean rotateString(String s, String goal) {
        if(s.length() != goal.length()) return false;

        String str = s + s;
        if(str.contains(goal)) return true;

        return false;
    }
}