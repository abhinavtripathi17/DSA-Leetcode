// Last updated: 8/4/2026, 12:36:08 PM
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
    public ListNode modifiedList(int[] nums, ListNode head) {
        Set<Integer>st = new HashSet<>();

        for(int i = 0 ; i < nums.length ; i++){
            st.add(nums[i]);
        }

        while(head != null && st.contains(head.val)){
            head = head.next;
        }

        ListNode temp = head;

        while(temp != null && temp.next != null){
            while(temp.next != null && st.contains(temp.next.val)){
                temp.next = temp.next.next;
            }
            temp = temp.next;
        }
        
        return head;
    }
}