#include"headers.h"

class Solution {
public:
    int sumEvenGrandparent(TreeNode* root) {
        int sum = 0;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode* current = q.front();
            q.pop();

            if(current->val%2==0)
            {
                if(current->left)
                {
                    if (current->left->left)
                        sum+=current->left->left->val;
                    if(current->left->right)
                        sum+=current->left->right->val;

                }

                if(current->right)
                {
                    if (current->right->left)
                        sum+=current->right->left->val;
                    if(current->right->right)
                        sum+=current->right->right->val;

                }

            }
            if(current->left)
                q.push(current->left);
            if(current->right)
                q.push(current->right);

        }
        return sum;
    }
};