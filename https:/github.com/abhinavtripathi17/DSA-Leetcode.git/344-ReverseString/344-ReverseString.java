// Last updated: 8/4/2026, 7:17:00 PM
class Solution {
    public void reverseString(char[] s) {
        int n=s.length;
        reverse(s,0,n-1);
    }

    public void reverse(char[] s,int l,int r){
        if(l>r) return;
        if(l<=r) {
            char temp=s[l];
            s[l]=s[r];
            s[r]=temp;
        }
        reverse(s,l+1,r-1);
    }
}