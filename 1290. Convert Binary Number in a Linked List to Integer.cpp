#include"headers.h"

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int number = 0;
        while(head)
        {
            number = number*2+head->val;
            head= head->next;
        }
        return  number;
    }
};