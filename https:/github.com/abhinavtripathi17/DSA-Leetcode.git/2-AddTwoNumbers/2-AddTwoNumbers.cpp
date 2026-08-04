// Last updated: 8/4/2026, 7:26:53 PM
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;

        ListNode* curr1 = l1;
        ListNode* curr2 = l2;
        int carry = 0;

        while(curr1 != nullptr && curr2 != nullptr){
            int sum = curr1->val + curr2->val+carry;
            carry = sum / 10;
            int rem = sum % 10;
            
            temp->next = new ListNode(rem);
            temp = temp->next;
            curr1 = curr1->next;
            curr2 = curr2->next; 
        }

        while(curr2 != nullptr){
            int sum = curr2->val + carry;
            carry = sum/10;
            int rem = sum%10;
            temp->next = new ListNode(rem);
            temp = temp->next;
            curr2 = curr2->next;
        }
        while(curr1 != nullptr){
            int sum = curr1->val + carry;
            carry = sum/10;
            int rem = sum%10;
            temp->next = new ListNode(rem);
            temp = temp->next;
            curr1 = curr1->next;
        }

        if(carry != 0){
            temp->next = new ListNode(carry);
        }
        return dummy->next;
    }
};