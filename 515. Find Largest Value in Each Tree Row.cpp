#include"headers.h"

class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
    if(root ==nullptr)
        return {};
    vector<int> result;
    queue<TreeNode*> q;
    q.push(root);

    // Parcurgerea BFS
    while (!q.empty()) {
        double levelSize = q.size(); 
        int max = -2147483647 - 1;
        for (int i = 0; i < levelSize; i++) {
            TreeNode* currentNode = q.front();
            q.pop();

            if(max <currentNode->val)
                max = currentNode->val;

            if (currentNode->left) q.push(currentNode->left);
            if (currentNode->right) q.push(currentNode->right);
        }

        result.push_back(max);

    }
    return result;
}
};