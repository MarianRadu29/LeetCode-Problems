#include"headers.h"

class Solution {
public:
    void reorderList(ListNode* head) {
       stack<ListNode*>st;
       ListNode* temp=head;

       while(temp!=NULL)
       {
        st.push(temp);
        temp=temp->next;
       }

       temp=head;
       ListNode* temp2=head->next;
       int size=st.size(); 

       while(size>1)
       {
        temp->next=st.top();
        st.top()->next=temp2;
        st.pop();
        temp=temp2;
        temp2=temp->next;
        size=size-2;
       }

       temp->next=NULL;
       //return;
    }
};