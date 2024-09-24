#include"headers.h"


class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==nullptr || head->next==nullptr )
            return nullptr;
        ListNode* aux = head;
        int nr_node = 0;
        while (aux)
        {
            nr_node++;
        //  cout << aux->val << ' ';
            aux = aux->next;
        }
        //cout << '\n';
        if(nr_node==n)
            {
                head = head->next;
                return head;
            }

        ListNode* p = head;
        for (int i = 1; i < nr_node - n; i++)
        {
            p = p->next;
        }
        p->next = p->next->next;
        //p = head;
        // while (p)
        // {
                //cout << p->val << ' ';
            //  p = p->next;
        //  }
        // cout << '\n';
        return head;
}
};