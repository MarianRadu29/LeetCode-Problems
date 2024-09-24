#include"headers.h"

class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(root->right==nullptr && root->left==nullptr)
            return true;
        return check(root->left,root->right);

    }
    bool check(TreeNode* r1,TreeNode* r2)
    {
        if(r1==nullptr&& r2==nullptr)
            return true;
        else
            if(r1 && r2)
            {
                if(r1->val==r2->val)
                {
                    return check(r1->left,r2->right) && check(r1->right, r2->left);
                }
            }
        return false;
    }
};