#include"headers.h"

class Solution {
public:
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
    
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr)
            return head;
        map<int, int> map;
        while (head)
        {
            if (map.find(head->val) == map.end())
                map.insert({ head->val,1 });
            else
                map[head->val]++;
            head = head->next;
        }
        ListNode* result = nullptr;
        for (auto it = map.rbegin();it!=map.rend();it++)
        {   
            if(it->second==1)
            result = InsertNode(result, it->first);
        }
        return result;

    }
};