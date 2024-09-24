#include"headers.h"

class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root==nullptr)
            return nullptr;
        if(val>root->val)
            return searchBST(root->right,val);
        if(val<root->val)
            return searchBST(root->left,val);
        return root;
    }
};