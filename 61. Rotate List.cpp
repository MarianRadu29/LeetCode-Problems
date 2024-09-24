#include"headers.h"

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) 
    {
        if (head == nullptr || head->next==nullptr)
            return head;
        int count = 0;
        ListNode* p = head;
        while (p)
        {
            count++;
            p = p->next;
        }
        k = k % count;

        ListNode* result = head;
        for (int i = 0; i < k; i++)
        {
            ListNode* aux = result;
            while (aux->next->next != nullptr)
                aux = aux->next;
            ListNode* a = aux->next;
            aux->next = nullptr;
            a->next = result;
            result = a;
        }
        return result;
    }
};