#include"headers.h"

class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
            vector < vector<int>> v;
    queue<TreeNode*> q;
    q.push(root);

    // Parcurgerea BFS
    while (!q.empty()) {
        int levelSize = q.size();
        vector<int> aux;
        for (int i = 0; i < levelSize; i++) {
            TreeNode* currentNode = q.front();
            q.pop();

            aux.push_back(currentNode->val);

            if (currentNode->left) q.push(currentNode->left);
            if (currentNode->right) q.push(currentNode->right);
        }

        v.push_back(aux);
    }
    /*for (auto a : v)
    {
        for (int i : a)
        {
            cout << i << ' ';
        }
    cout << '\n';
    }
    */
    vector<int> a = v[v.size() - 1];
    return a[0];
}
};