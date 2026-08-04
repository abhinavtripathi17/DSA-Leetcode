// Last updated: 8/4/2026, 7:18:29 PM
class Solution {
    public boolean isPowerOfTwo(int n) {
        return power(n);
    }
    public boolean power(int n){
        if(n%2==1 && n!=1) return false;
        if(n==1) return true;
        if(n==0) return false;
        return power(n/2);
    }
}