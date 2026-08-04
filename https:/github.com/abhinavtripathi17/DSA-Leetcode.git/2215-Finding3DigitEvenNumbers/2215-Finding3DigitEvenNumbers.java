// Last updated: 8/4/2026, 12:40:19 PM
class Solution {
    public int[] findEvenNumbers(int[] digits) {
        int f[] = new int [10];
        for(int digit : digits){
            f[digit]++;
        }
        ArrayList<Integer>ll = new ArrayList<>();
        for(int i = 100 ; i < 999 ; i++){
            if(i % 2 == 1) continue;
            int n1 = i/100;
            int n2 = (i/10)%10;
            int n3 = i%10;

            int tempf [] = new int[10];
            tempf[n1]++;
            tempf[n2]++;
            tempf[n3]++;

            boolean contains = true;
            for(int j = 0 ; j < 10 ; j++){
                if(tempf[j] > f[j]){
                    contains = false;
                    break;
                }
            }
            if(contains) ll.add(i);
            
        }
        int ans[] = new int[ll.size()];
        for(int i = 0 ; i < ll.size() ; i++){
            ans[i] = ll.get(i);
        }
        return ans;
    }
}