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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        vector<int> v1 , v2 , result;
        while(l1 || l2)
        {
            if(l1)
                {
                    v1.push_back(l1->val);
                    l1 = l1->next;
                }
            if(l2)
                {
                    v2.push_back(l2->val);
                    l2 = l2->next;
                }
         
        }
        int n=v1.size()-1;
        int m = v2.size()-1;
        int carry = 0;
        for(;n>=0&&m>=0;n--,m--)
        {   
            result.push_back((v1[n]+v2[m]+carry)%10);
            carry = (v1[n]+v2[m]+carry)/10;
        }
        while(n>=0)
            {
                result.push_back((carry + v1[n])%10);
                carry = (carry + v1[n])/10;
                n--;
            }
         while(m>=0)
            {
                result.push_back((carry + v2[m])%10);
                carry = (carry + v2[m])/10;
                m--;
            }
        if(carry==1)
            result.push_back(1);
        ListNode* rez = nullptr;
        for(int i :result)
            rez = InsertNode(rez,i);
        return rez;

    }
};