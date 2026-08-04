// Last updated: 8/4/2026, 7:20:32 PM
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
    public ListNode sortList(ListNode head) {
        ArrayList<Integer>List = new ArrayList();

        ListNode temp = head;
        while(temp != null){
            List.add(temp.val);
            temp = temp.next;
        }
        Collections.sort(List);

        ListNode curr = head;

        for(int i = 0 ; i < List.size() ; i++){
            curr.val = List.get(i);
            curr = curr.next; 
        }
        return head;
    }
}