// Last updated: 8/4/2026, 12:41:51 PM
class Solution {
    public int secondHighest(String s) {
        int largest = -1;
        int secondLargest = -1;
        
        HashSet<Integer> digits = new HashSet<>();
        for(char ch : s.toCharArray()){
          if(ch >= '0' && ch <= '9'){
             int digit = ch-'0';
              digits.add(digit);
          }
        }
        
        for(int digit : digits){
            if(digit > largest){
                secondLargest = largest;
                largest = digit;
            }else if(digit > secondLargest){
                secondLargest = digit;
            }
        }
      
        return secondLargest;
    }
}