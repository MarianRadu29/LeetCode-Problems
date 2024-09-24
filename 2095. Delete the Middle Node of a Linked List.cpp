#include"headers.h"

class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next == nullptr)
            return nullptr;
        if(head->next->next==nullptr)
            {
                head->next = nullptr;
                return head;
            }
        
        ListNode* l1 = head;
        ListNode* l2 = head;
        while(l2 || l2->next)
        {
            l2 = l2->next->next;
            if(l2==nullptr || l2->next==nullptr)
                {
                    l1->next = l1->next->next;
                    break;
                }
            else
                l1 = l1->next;
                
        }
        return head;
    }
};