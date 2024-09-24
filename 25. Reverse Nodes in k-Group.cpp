#include"headers.h"

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
    int count = 0;
    ListNode* a = head;
    stack<int> Stack;
    queue<int> Queue;
    while (a != nullptr)
    {
        ListNode* aux = nullptr;
        unsigned i;
        for ( i = 0; i < k && a!=nullptr; i++)
        {
            ListNode* aux1 = new ListNode(a->val);
            a = a->next;
            aux1->next = aux;
            aux = aux1;
        }
        if(i<k)
            while (aux != nullptr)
            {
                Queue.push(aux->val);
                aux = aux->next;
            }
        else
            while (aux!=nullptr)
            {
                Stack.push(aux->val);
                aux = aux->next;
            }       
    }
    ListNode* result = nullptr;
    while (!Queue.empty())
    {
        ListNode* aux1 = new ListNode(Queue.front());
        aux1->next = result;
        result = aux1;
        Queue.pop();
    }
    while (!Stack.empty())
    {
        ListNode* aux1 = new ListNode(Stack.top());
        aux1->next = result;
        result = aux1;
        Stack.pop();
    }
    return result;

}
};