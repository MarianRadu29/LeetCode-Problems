#include"headers.h"

class Solution {
public:
    bool isValidBST(TreeNode* root) 
    {
        vector<int> v;
        LRR(root, v);
        for (int i = 1; i < v.size(); i++)
            if (v[i - 1] >= v[i])
                return false;
        return true;
    }
    void LRR(TreeNode* root, vector<int>& v)
    {
        if (root == nullptr)
            return;

        LRR(root->left, v);
        v.push_back(root->val);
        LRR(root->right, v);
    }
};