// Last updated: 8/4/2026, 12:34:42 PM
class Solution {
    public long sumOfLargestPrimes(String s) {
        int n = s.length();
        Set<Long>st = new HashSet<>();

        for(int i = 0 ; i < n ; i++){
            for(int j = i+1 ; j <= n ; j++){
                String str = s.substring(i , j);
                long num = Long.parseLong(str);
                st.add(num);
            }
        }
        List<Long>list = new ArrayList<>();
        for(long k : st){
            if(isPrime(k)) list.add(k);
        }
        Collections.sort(list ,Collections.reverseOrder());
        long sum = 0;
        for(int i = 0 ; i < Math.min(3 , list.size()) ; i++){
            sum += list.get(i);
        }
        return sum;
    }
    public boolean isPrime(long num){
        if(num < 2) return false;
        if(num == 2) return true;

        if(num % 2 == 0) return false;

        for(long i = 3 ; i <= Math.sqrt(num) ; i=i+2){
            if(num % i == 0) return false;            
        }
        return true;
    }
}