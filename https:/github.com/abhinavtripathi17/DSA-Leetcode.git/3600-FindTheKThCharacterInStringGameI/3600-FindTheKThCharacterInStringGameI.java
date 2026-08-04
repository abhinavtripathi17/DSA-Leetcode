// Last updated: 8/4/2026, 12:35:55 PM
class Solution {
    public char kthCharacter(int k) {
        StringBuilder curr = new StringBuilder("a");
        
        while (curr.length() < k) {
            StringBuilder temp = new StringBuilder();
            for (int i = 0; i < curr.length(); i++) {
                char ch = curr.charAt(i);
                if (ch == 'z') temp.append('a');
                else temp.append((char)(ch + 1));
            }
            curr.append(temp);
        }
        return curr.charAt(k - 1);
    }
}