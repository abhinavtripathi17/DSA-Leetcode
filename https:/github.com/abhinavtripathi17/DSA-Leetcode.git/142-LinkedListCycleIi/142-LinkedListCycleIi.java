// Last updated: 8/4/2026, 7:20:57 PM
/**
 * Definition for singly-linked list.
 * class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public ListNode detectCycle(ListNode head) {
        
        // ListNode temp = head;

        // HashMap<ListNode , Integer>mpp = new HashMap();

        // while(temp != null){
        //     if(mpp.containsKey(temp)){
        //         return temp;
        //     }
        //     mpp.put(temp , 1);
        //     temp = temp.next;
        // }
        ListNode slow = head;
        ListNode fast = head;

        while(fast != null && fast.next != null){

            fast = fast.next.next;
            slow = slow.next;

            if(fast == slow){
                slow = head;
                while(slow != fast){
                    slow = slow.next;
                    fast = fast.next;
                }
                return slow;
            }
            
        }
        return null;
    }
}