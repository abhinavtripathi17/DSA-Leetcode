// Last updated: 8/4/2026, 7:18:26 PM
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
    public boolean isPalindrome(ListNode head) {
        ListNode slow = head, fast = head;
        while(fast != null && fast.next != null){
            slow = slow.next;
            fast = fast.next.next;
        }
        ListNode rev_head = reverse_ll(slow);
        ListNode first_half = head , sec_half = rev_head;

        while(sec_half != null){
            if(first_half.val != sec_half.val) return false;
            first_half = first_half.next;
            sec_half = sec_half.next;
        }
        return true;
    }
    public static ListNode reverse_ll(ListNode head){
        ListNode prev = null , curr = head;

        while(curr != null){
            ListNode temp = curr.next;
            curr.next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }
}