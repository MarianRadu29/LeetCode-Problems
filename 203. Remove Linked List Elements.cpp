#include"headers.h"

class Solution {
public:
    ListNode* removeElements(ListNode* head, int value) {
        if(head==nullptr)
        {
            return nullptr;
        }
        if((head->next==nullptr) && (head->val==value))
        {
            return nullptr;
        }
        if((head->val!=value) && (head->next==nullptr))
        {
            return head;
        }
        while((head!=nullptr) && (head->val==value))
        {
            ListNode* temp1=head;
            head=head->next;
            temp1->next=nullptr;
            delete temp1;
         }
        ListNode* temp=head;
        while((temp!=nullptr) && (temp->next!=nullptr))
        {
            ListNode* forward=temp->next;
            if(temp->next->val==value)
            {
                temp->next=forward->next;
                forward->next=nullptr;
                delete forward;
            }
            else{
                temp=temp->next;
                forward=forward->next;
            }
        }
        return head;
    }
};