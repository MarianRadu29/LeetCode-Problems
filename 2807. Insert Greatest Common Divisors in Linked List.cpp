#include"headers.h"

class Solution {
   int gcd(int x, int y)
    {
        while (x != y)
            if (x > y)
                x -= y;
            else
                y -= x;
        return x;
    }
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
            if (head == nullptr || head->next == nullptr)
                return head;
            ListNode* aux = head;
            while (aux->next)
            {
                int m = gcd(aux->val, aux->next->val);
                std::cout << m << '\n';
                ListNode* a = new ListNode(m);
                a->next = aux->next;
                aux->next = a;
                aux = aux->next->next;
            }
            return head;
    }
};