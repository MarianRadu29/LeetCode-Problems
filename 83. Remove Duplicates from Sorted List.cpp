#include"headers.h"

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
    ListNode* p = head;
    set<int> s;
    while (p != nullptr)
    {
        s.insert(p->val);
        p = p->next;
    }
    ListNode* result = nullptr;
    for (auto it = s.rbegin() ; it!=s.rend() ; it++)
    {
        ListNode* aux = new ListNode(*it);
        aux->next = result;
        result = aux;
    }
    return result;
}
};