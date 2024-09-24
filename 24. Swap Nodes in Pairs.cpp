#include"headers.h"

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
    if (head == nullptr || head->next == nullptr)
        return head;
    ListNode* aux = head;
    while (aux != nullptr && aux->next != nullptr)
    {   
        //cout << aux->val<<' '<< aux->next->val << '\n';
        int x;
        x = aux->val;
        aux->val = aux->next->val;
        aux->next->val = x;
        aux = aux->next->next;
    }

    return head;
}
};