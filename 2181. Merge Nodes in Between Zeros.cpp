#include"headers.h"

class Solution {
    ListNode* InsertNode(ListNode* head, int value)
    {
        if (head == nullptr)
        {
            head = new ListNode(value);
        }
        else
        {
            ListNode* a = new ListNode(value);
            a->next = head;
            head = a;
        }
        return head;
    }
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* result = nullptr;
        stack<int> s;
        ListNode* p = head;
        p = p->next;
        int sum = 0;
        while(p)
        {
            if(p->val!=0)
                sum+=p->val;
            else
            {
                s.push(sum);
                sum=0;
            }
            p = p->next;
        }
        while(s.empty()==false)
        {
            result = InsertNode(result,s.top());
            s.pop();
        }
        return result;
    }
};