#include"headers.h"

class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
    if (root == nullptr) return {};
    vector<int> result;
    queue<TreeNode*> q; 

    q.push(root);

    // Parcurgerea BFS
    while (!q.empty()) {
        int levelSize = q.size(); 
        
        for (int i = 0; i < levelSize; i++) {
            TreeNode* currentNode = q.front();
            if(i==levelSize-1)
                result.push_back(currentNode->val);
            q.pop();

            if (currentNode->left) q.push(currentNode->left);
            if (currentNode->right) q.push(currentNode->right);
        }
    }
    return result;
}
};