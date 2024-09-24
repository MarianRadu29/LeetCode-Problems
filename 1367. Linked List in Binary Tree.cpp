#include"headers.h"

class Solution {
public:
    bool conditie(ListNode* head, TreeNode* root)
    {
        if(!head && !root)
            return true;
        if(head!= nullptr && root!= nullptr)
            {   
                if(head->val==root->val)
                    if(head->next==nullptr)
                        return true;
                    else
                        return (conditie(head->next,root->left) || conditie(head->next,root->right));
            }
        return false;
    }
    bool isSubPath(ListNode* head, TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()) {
            TreeNode *current = q.front();
            TreeNode*auxx = current;
            q.pop();
            ListNode* aux =head;
            if(conditie(aux,auxx))
                return true;

            if(current->left)
                q.push(current->left);
            if(current->right)
                q.push(current->right);

        }
        return false;
    }
};