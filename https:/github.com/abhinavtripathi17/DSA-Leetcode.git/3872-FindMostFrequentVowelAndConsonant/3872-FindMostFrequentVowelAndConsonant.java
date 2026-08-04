// Last updated: 8/4/2026, 12:34:18 PM
class Solution {
    public int maxFreqSum(String s) {
        int[] freq = new int[26];
        int maxVowel = 0, maxConso = 0;
        for (char c : s.toCharArray()) {
            int i = c - 'a';
            freq[i]++;
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                maxVowel = Math.max(maxVowel, freq[i]);
            else
                maxConso = Math.max(maxConso, freq[i]);
        }
        return maxVowel + maxConso;
    }
}