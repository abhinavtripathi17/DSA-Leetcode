// Last updated: 8/4/2026, 7:17:03 PM
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
    ListNode* oddEvenList(ListNode* head) {
        if(head == nullptr || head->next == nullptr){
            return head;
        }
        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;

        while(odd != nullptr){
            temp->next = new ListNode(odd->val);
            temp = temp->next;
            if(odd->next){
                odd = odd->next->next;
            }
            else{
                odd = nullptr;
            }
        }
        while(even != nullptr){
            temp->next = new ListNode(even->val);
            temp = temp->next;
            if(even->next != nullptr){
                even = even->next->next;
            }
            else{
                even = nullptr;
            }
        }

        return dummy->next;
    }
};