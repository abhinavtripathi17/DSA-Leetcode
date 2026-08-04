// Last updated: 8/4/2026, 12:43:59 PM
class Solution {
    public int countLargestGroup(int n) {
        Map<Integer , Integer>mpp = new HashMap<>();
        int maxi = 0;

        for(int i = 1 ; i <= n ; i++){
            int sum = 0 , num = i;
            while(num > 0){
                sum += num%10;
                num /= 10;
            }
            mpp.put(sum , mpp.getOrDefault(sum , 0)+1);
            maxi = Math.max(maxi , mpp.get(sum));
        }
        int cnt = 0;
        for(int i : mpp.values()){
            if(i == maxi) cnt++;
        }
        return cnt;
    }
}