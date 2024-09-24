#include"headers.h"

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
    if (root == nullptr) return {};
    vector<vector<int>> result;
    queue<TreeNode*> q; 

    q.push(root);

    while (!q.empty()) {
        int levelSize = q.size();
        vector<int> v;
        
        for (int i = 0; i < levelSize; i++) {
            TreeNode* currentNode = q.front();
            q.pop();

            v.push_back(currentNode->val);

            if (currentNode->left) q.push(currentNode->left);
            if (currentNode->right) q.push(currentNode->right);
        }

        result.push_back(v);
    }
    return result;
}
};