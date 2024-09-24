#include"headers.h"


class Solution {
public:
    ListNode* sortList(ListNode* head) 
    {
        if (head == nullptr)
            return head;
        if (head->next == nullptr)
            return head;
        multiset<int> SET;
        ListNode* aux = head;
        while (aux)
        {
            SET.insert(aux->val);
            aux = aux->next;
        }
        ListNode* result = new ListNode();
        result = nullptr;
        for (auto it = SET.rbegin(); it != SET.rend(); ++it)
        {
            ListNode* a = new ListNode(*it);
            a->next = result;
            result = a;
        }
        return result;
    }
};