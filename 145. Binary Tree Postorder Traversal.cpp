#include"headers.h"

class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root)
    {
        vector<int> result;
        SRD(result, root);
        return result;
    }
private:
    void SRD(vector<int>& a, TreeNode* root)
    {
        if (root == nullptr)
                return;
        SRD(a, root->left);
        SRD(a, root->right);
        a.push_back(root->val);
    }
};