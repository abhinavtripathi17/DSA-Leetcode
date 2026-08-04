// Last updated: 8/4/2026, 12:39:50 PM
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
    ListNode* mergeNodes(ListNode* head) {
      ListNode* curr = head;

      while(curr->next != nullptr){
        ListNode* temp = curr -> next;
        int sum = 0;
        while(temp->val != 0){
            sum += temp->val;
            temp = temp->next;
        }
        temp->val = sum;
        curr->next = temp;
        curr = curr->next;
      }  

      return head->next;
    }
};