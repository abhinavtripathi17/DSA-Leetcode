// Last updated: 8/4/2026, 12:36:49 PM
class Solution {
    public int minOperations(int[] nums, int k) {
        int n = nums.length;
        PriorityQueue<Long> pq = new PriorityQueue<>();
        int cnt = 0;
        for(int i = 0 ; i < n ; i++){
            pq.add((long)nums[i]);
        }

        while(!pq.isEmpty() && pq.peek() < k){
            if(pq.size() < 2) return -1;
            long a = pq.poll();
            long b = pq.poll();
            long c = (Math.min(a,b) * 2) + Math.max(a,b);
            
             pq.add(c);
             cnt++;
            
        }
        return cnt;
    }
}