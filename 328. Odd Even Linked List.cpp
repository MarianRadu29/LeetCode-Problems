#include"headers.h"

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head==nullptr || head->next ==nullptr)
            return head;
        ListNode* temp = nullptr;
        ListNode* aux = head;
        while(aux && aux->next)
        {   
            if(temp==nullptr)
                {
                    temp = aux->next;
                    aux->next = temp->next;
                    temp->next = nullptr;
                }
            else
            {
                ListNode* temp2 = temp;
                while(temp2->next)
                    temp2 = temp2->next;
                temp2->next = aux->next;
                aux->next = temp2->next->next;
                temp2->next->next = nullptr;
            }
            aux = aux->next;
        }
        ListNode* t = temp;
        /* while(t)
        {
            cout<<t->val<<' ';
            t = t->next;
        } */
        //cout<<"da\n";
        aux = head;
        /* while(aux->next)
        {   
            cout<<aux->val<<' ';
            aux = aux->next;
        }   */ 
        aux->next = temp;
        return head;


    }
};