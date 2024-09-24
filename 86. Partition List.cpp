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
    ListNode* partition(ListNode* head, int x) {
    if (head == nullptr)
        return head;
    vector<int> low;
    vector<int> great;
    while (head)
    {
        if (head->val < x)
            low.push_back(head->val);
        else
            great.push_back(head->val);
        head = head->next;
    }
    reverse(low.begin(), low.end());
    reverse(great.begin(), great.end());
    ListNode* result = nullptr;
    for (int i : great)
    {
        result = InsertNode(result, i);
    }
    for (int i : low)
    {
        result = InsertNode(result, i);
    }
    return result;


}
};