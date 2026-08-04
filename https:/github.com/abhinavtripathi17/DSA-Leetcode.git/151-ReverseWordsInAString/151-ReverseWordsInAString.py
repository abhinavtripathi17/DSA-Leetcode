# Last updated: 8/4/2026, 7:20:37 PM
class Solution:
    def reverseWords(self, s: str) -> str:
        st = s.split()

        st.reverse()

        result = ' '.join(st)
        return result