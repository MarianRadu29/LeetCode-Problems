#include"headers.h"


class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        vector<int> v;
        LRR(root, v);
        return v[k-1];
    }
    void LRR(TreeNode* root, vector<int>& v)//Left Root Right (RLL) parcurgerea in inordine
    {
        if (root == nullptr)
            return;

        LRR(root->left, v);
        v.push_back(root->val);
        LRR(root->right, v);
    }
};