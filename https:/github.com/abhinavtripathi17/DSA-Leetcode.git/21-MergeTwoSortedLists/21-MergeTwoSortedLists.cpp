// Last updated: 8/4/2026, 7:25:55 PM
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;

        ListNode* curr1 = list1;
        ListNode* curr2 = list2;

        while(curr1 != nullptr && curr2 != nullptr){
            if(curr1->val <= curr2->val){
                temp->next = curr1;
                curr1 = curr1->next;
                temp = temp->next;
            }
            else {
                temp->next = curr2;
                curr2 = curr2->next;
                temp = temp->next;
            }
        }

        while(curr1){
            temp->next = curr1;
            curr1 = curr1->next;
            temp = temp->next;

        }
        while(curr2){
            temp->next = curr2;
            curr2 = curr2->next;
            temp = temp->next;

        }

        return dummy->next;
    }
};