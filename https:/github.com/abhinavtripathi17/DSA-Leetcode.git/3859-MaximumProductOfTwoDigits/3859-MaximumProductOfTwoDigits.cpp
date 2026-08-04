// Last updated: 8/4/2026, 12:34:31 PM
class Solution {
public:
    int maxProduct(int n) {
        priority_queue<int>pq;

        while(n > 0){
            int rem = n%10;
            pq.push(rem);
            n = n/10;
        }

        int top1 = pq.top();
        pq.pop();
        int top2 = pq.top();
        return top1*top2;
    }
};