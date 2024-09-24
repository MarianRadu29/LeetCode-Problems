#include"headers.h"


class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
    if (lists.size() == 0)
        return nullptr;
    vector<ListNode*> listss = lists;
    vector<int> aux;
    int count = 0;
    for (unsigned i = 0; i < lists.size(); i++)
    {
        while (listss[i] != nullptr)
        {
            //cout<<l->val<<'\t'<<++count<<endl;
            aux.push_back(listss[i]->val);
            listss[i] = listss[i]->next;
        }
    }
    sort(aux.rbegin(), aux.rend());
    ListNode* a = nullptr;
    for (auto i : aux)
    {
        ListNode* b = new ListNode(i);
        b->next = a;
        a = b;
    }
    return a;
}
};