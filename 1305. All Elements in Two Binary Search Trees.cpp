#include"headers.h"


class Solution {
public:
     vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        multiset<int> mset;
        parcurgere(root1, mset);
        parcurgere(root2, mset);
        vector<int> result;
        for (int a : mset)
            result.push_back(a);
        return result;

    }
    void parcurgere(TreeNode* root, multiset<int>& m)
    {
        if (root)
        {
            parcurgere(root->left, m);
            m.insert({ root->val });
            parcurgere(root->right, m);
        }
    }
};