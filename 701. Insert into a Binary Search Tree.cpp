#include"headers.h"

class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==nullptr)     
            return new TreeNode(val);
        insert(root,val);
        return root;
    }
    void insert(TreeNode* root,int val)
    {
        if(root->val > val)
        {
            if(root->left == nullptr)
                root->left = new TreeNode(val);
            else
                insert(root->left,val);
        }
        else
        {
             if(root->right == nullptr)
                root->right = new TreeNode(val);
            else
                insert(root->right,val);
        }
    }
};