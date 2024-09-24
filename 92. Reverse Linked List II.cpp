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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head==nullptr)
            return head;
        vector<int> vec;
        while(head)
        {
            vec.push_back(head->val);
            head = head->next;
        }
        reverse(vec.begin() + (left - 1), vec.begin() + right);
        reverse(vec.begin(),vec.end());
        ListNode* result = nullptr;
        for(int i : vec)
        {
            result = InsertNode(result , i);
        }
        return result;
    }
};