#include"headers.h"

class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
    if (root == nullptr) 
        return {0};

    queue<TreeNode*> q; 

    vector<double> result;
    q.push(root);

    // Parcurgerea BFS
    while (!q.empty()) {
        double levelSize = q.size(); 
        long long int  sum = 0;

        for (int i = 0; i < levelSize; i++) {
            TreeNode* currentNode = q.front();
            q.pop();

            sum += currentNode->val;

            if (currentNode->left) q.push(currentNode->left);
            if (currentNode->right) q.push(currentNode->right);
        }
        
        result.push_back(sum / levelSize);
        
    }
    return result;
}
};