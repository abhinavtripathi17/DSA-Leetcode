// Last updated: 8/4/2026, 7:24:07 PM
/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode rotateRight(ListNode head, int k) {
        if(head == null || head.next == null || k == 0) return head;
        ListNode res = head;

        int cnt = 1;

        while(res.next != null){
            cnt++;
            res = res.next;
        }
        k = k % cnt;

        if(k == 0) return head;

        res.next = head; // ll is circular now

        int x = cnt - k;

        //res.next = head;
        while(x > 0){
            res = res.next;
            x--;
        }
        head = res.next;
        res.next = null;

        return head;
    }
}