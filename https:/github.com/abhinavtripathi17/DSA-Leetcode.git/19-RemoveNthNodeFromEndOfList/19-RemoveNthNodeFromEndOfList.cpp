// Last updated: 8/4/2026, 7:26:02 PM
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode* fast = head;

        for(int i = 0 ; i < n ; i++){
            fast = fast->next;
        }
        if(fast == nullptr){
            return head->next;
        }
        
        ListNode* slow = head;
        ListNode* prev = nullptr;

        while(fast->next != nullptr){
            prev = slow;
            slow = slow->next;
            fast = fast->next;
        }
        slow->next = slow->next->next;
        return head;
    }
};