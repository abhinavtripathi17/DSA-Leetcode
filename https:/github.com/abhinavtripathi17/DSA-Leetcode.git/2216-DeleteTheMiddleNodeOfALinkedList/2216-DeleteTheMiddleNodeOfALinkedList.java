// Last updated: 8/4/2026, 12:40:22 PM
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
    public ListNode deleteMiddle(ListNode head) {
        // ListNode temp = head;
        // int cnt = 0;
        
         if(head == null || head.next == null) return null;

        // while(temp != null){
        //     temp = temp.next;
        //     cnt++;
        // }

        // ListNode curr = head;
        // int timer = 1;

        // while(timer < cnt/2){
        //     curr = curr.next;
        //     timer++;
        // }
        // curr.next = curr.next.next;

        // return head;

        ListNode slow = head , fast = head , prev = null;

        while(fast != null && fast.next != null){
            prev = slow;
            slow = slow.next;
            fast = fast.next.next;

        }
        prev.next = slow.next;
        return head;

    }
}