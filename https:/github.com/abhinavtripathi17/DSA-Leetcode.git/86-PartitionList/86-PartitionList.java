// Last updated: 8/4/2026, 7:22:51 PM
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
    public ListNode partition(ListNode head, int x) {
        if(head == null) return head;
        ListNode temp1 = new ListNode(0);
        ListNode d1 = temp1;

        ListNode temp2 = new ListNode(0);
        ListNode d2 = temp2;

        ListNode temp = head;

        while(temp != null){
            if(temp.val < x){
                d1.next = temp;
                d1 = d1.next;
            }
            else{
                d2.next = temp;
                d2 = d2.next;
            }
            temp = temp.next;
        }
        d2.next = null;
        d1.next = temp2.next;
        return temp1.next;
    }
}