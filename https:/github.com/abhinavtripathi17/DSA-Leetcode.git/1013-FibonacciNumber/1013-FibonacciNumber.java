// Last updated: 8/4/2026, 7:10:31 PM
class Solution {
    public int fib(int n) {
        return fibo(n);
    }
    public int fibo(int n){
        if(n==0) return 0;
        if(n==1)  return 1;
        return fib(n-1)+fib(n-2);
        
    }
}