#include"headers.h"

class Solution {
    stack<vector<int>> bfs(TreeNode* root) {
    if (root == nullptr) return stack<vector<int>>({});

    std::queue<TreeNode*> q;  // Coada pentru BFS
    q.push(root);
    stack<vector<int>> stack;
    while (!q.empty()) {
        int levelSize = q.size(); 
        vector<int> aux;
        for (int i = 0; i < levelSize; ++i) {
            TreeNode* node = q.front();
            q.pop();

           aux.push_back(node->val);

            if (node->left) {
                q.push(node->left);
            }
            if (node->right) {
                q.push(node->right);
            }
        }
        stack.push(aux);
    }
    return stack;
}


public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(root==nullptr)
            return {};
        vector<vector<int>> result;
        stack<vector<int>> stack = bfs(root);
        while(stack.empty()==false)
        {
            result.push_back(stack.top());
            stack.pop();
        }
        return result;
    }
};