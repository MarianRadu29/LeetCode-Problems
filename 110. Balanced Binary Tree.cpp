#include"headers.h"

class Solution {
    int depth(TreeNode* root) {
    if (root == nullptr) {
        return 0;
    }
    return 1 + std::max(depth(root->left), depth(root->right));
}
public:

bool isBalanced(TreeNode* root) {
    if (root == nullptr) {
        return true;
    }
    int leftDepth = depth(root->left);
    int rightDepth = depth(root->right);
    return std::abs(leftDepth - rightDepth) <= 1 && isBalanced(root->left) && isBalanced(root->right);
}
};