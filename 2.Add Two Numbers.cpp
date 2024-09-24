#include"headers.h"

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode(0);
        ListNode* aux = head;
        int carry = 0;

        while (l1||l2||carry)
        {
            int x = l1? l1->val : 0;
            int y = l2? l2->val : 0;

            int sum = x + y + carry;
            int digit = sum % 10;
            carry = sum / 10;

            ListNode* newNode = new ListNode(digit);
            aux->next = newNode;
            aux = aux->next;

            l1 = l1 ? l1->next : nullptr;
            l2 = l2 ? l2->next : nullptr;
        }

        ListNode* result = head->next;
        delete head;
        return result;
    }
};