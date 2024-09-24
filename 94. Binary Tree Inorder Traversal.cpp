#include"headers.h"

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) 
    {
        vector<int> result;
        SRD(result, root);
        return result;
    }

    void SRD(vector<int>& a, TreeNode* root)
    {
        if (root != nullptr)
        {
            SRD(a, root->left);
            a.push_back(root->val);
            SRD(a, root->right);
        }
    }
};