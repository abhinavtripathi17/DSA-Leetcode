// Last updated: 8/4/2026, 7:24:01 PM
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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == nullptr || head->next == nullptr) return head;
        ListNode* temp = head;
        ListNode* prev = head;
        int cnt = 0;
        while(temp != nullptr){
            prev = temp;
            temp = temp->next;
            cnt++;
        }
        prev->next = head;

       k = k%cnt;
       int len = cnt - k;

       temp = head;
       prev = temp;
       while(len > 0){
        prev = temp;
        temp = temp->next;
        len--;
       }
       prev->next = nullptr;

       return temp;
    }
};