#include"headers.h"


class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode* result = new ListNode();
    result = nullptr;
    stack<int> st;
    ListNode* l1 = list1;
    ListNode* l2 = list2;
    while (l1!=nullptr && l2!=nullptr)
    {
        if (l1->val < l2->val)
        {
            st.push(l1->val);
            l1 = l1->next;
        }
        else
        {
            st.push(l2->val);
            l2 = l2->next;
        }
    }
    if (l1!=nullptr)
        while(l1!=nullptr)
        {
            st.push(l1->val);
            l1 = l1->next;
        }

    if(l2!=nullptr)
        while (l2!=nullptr)
        {
            st.push(l2->val);
            l2 = l2->next;
        }
    while (st.empty() == false)
    {
        ListNode* aux = new ListNode(st.top());
        aux->next = result;
        result = aux;
        st.pop();
    }
    return result;
}
};