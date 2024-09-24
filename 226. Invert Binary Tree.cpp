#include"headers.h"


class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
    if (root == nullptr)
        return root;
    TreeNode* aux = root->right;
    root->right = invertTree(root->left);
    root->left = invertTree(aux);
    return root;
}
};