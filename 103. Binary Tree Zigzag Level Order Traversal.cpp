#include"headers.h"

class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
    if (root == nullptr) return {};
    vector<vector<int>> result;
    queue<TreeNode*> q;
    bool ok = true;

    q.push(root);

    // Parcurgerea BFS
    while (!q.empty()) {
        int levelSize = q.size();
        
        vector<int> v;
        stack<int> s;
        for (int i = 0; i < levelSize; i++) {
            
            TreeNode* currentNode = q.front();
            if (ok == true)
                v.push_back(currentNode->val);
            else
                s.push(currentNode->val);
            q.pop();

            if (currentNode->left) q.push(currentNode->left);
            if (currentNode->right) q.push(currentNode->right);
        }
        if (ok == true)
        {
            result.push_back(v);
        }
        else
        {
            vector<int> aux;
            while (s.empty() == false)
            {
                aux.push_back(s.top());
                s.pop();
            }
            result.push_back(aux);
        }
        ok = !ok;

    }
    return result;
}
};