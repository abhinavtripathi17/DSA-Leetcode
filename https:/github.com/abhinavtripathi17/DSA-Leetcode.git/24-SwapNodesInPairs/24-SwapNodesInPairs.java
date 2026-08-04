// Last updated: 8/4/2026, 7:25:50 PM
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
    public ListNode swapPairs(ListNode head) {
        if(head == null || head.next == null) return head;
        ListNode temp1 = head , temp2 = head.next;
        while(temp2 != null ){
            int t = temp1.val;
            temp1.val = temp2.val;
            temp2.val = t;

            if(temp2.next != null){
            temp1 = temp2.next;
            temp2 = temp1.next;
            }
            
            else break;
        }
        return head;
         
    }
}