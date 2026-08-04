// Last updated: 8/4/2026, 7:25:40 PM
class Solution {
public:
    ListNode* findKGroups(ListNode* temp, int k) {
        k--;
        while (temp != nullptr && k > 0) {
            temp = temp->next;
            k--;
        }
        return temp;
    }

    ListNode* reverseLL(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while (curr) {
            ListNode* front = curr->next;
            curr->next = prev;
            prev = curr;
            curr = front;
        }
        return prev;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* prevNode = nullptr;

        while (temp) {
            ListNode* kThNode = findKGroups(temp, k);

            if (kThNode == nullptr) {
                if (prevNode)
                    prevNode->next = temp;
                break;
            }

            ListNode* nextNode = kThNode->next;
            kThNode->next = nullptr;

            reverseLL(temp);

            if (temp == head)
                head = kThNode;
            else
                prevNode->next = kThNode;

            prevNode = temp;
            temp = nextNode;
        }

        return head;
    }
};