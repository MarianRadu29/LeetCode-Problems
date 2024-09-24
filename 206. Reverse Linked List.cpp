#include"headers.h"

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
    queue<int> coada;
    while (head)
    {
        coada.push(head->val);
        head = head->next;
    }
    ListNode* result = nullptr;
    while (coada.empty() == false)
    {
        ListNode* aux = new ListNode(coada.front());
        coada.pop();
        aux->next = result;
        result = aux;
    }
    return result;

}
};