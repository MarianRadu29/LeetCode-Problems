#include"headers.h"

class Solution {
public:
    int pairSum(ListNode* head) {
        int max = -1;
        ListNode* aux = head;
        stack<int> st;
        while(aux)
        {
            st.push(aux->val);
            aux = aux->next;
        }
        int n = st.size();
        while(st.size()!=n/2)
        {
            int number = st.top()+head->val;
            if(number>max)
                max =number;
            st.pop();
            head = head->next;
        }
        return max;
    }
};