#include"headers.h"

class Solution {
public:
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
    if (depth == 1)
    {
        TreeNode* new_root = new TreeNode(val, root, nullptr);
        return new_root;
    }

    queue<TreeNode*> q; 

    int height = 1;
    
    q.push(root);

    // Parcurgerea BFS
    while (!q.empty() ) {
        double levelSize = q.size(); 
        
        if(height<depth-1)
        {
            for (int i = 0; i < levelSize; i++) {
                TreeNode* currentNode = q.front();
                q.pop();
                //cout<<currentNode->val<<' ';
            
                if (currentNode->left) q.push(currentNode->left);
                if (currentNode->right) q.push(currentNode->right);
                
            }
            height++;
        }
        else
        {
            while (q.empty() == false)
            {
                TreeNode* currentNode = q.front();
                q.pop();

                if (currentNode->left == nullptr)
                {
                    currentNode->left = new TreeNode(val, nullptr, nullptr);
                }
                else
                {
                    TreeNode* aux = new TreeNode(val, currentNode->left, nullptr);
                    currentNode->left = aux;
                }


                if (currentNode->right == nullptr)
                {
                    currentNode->right = new TreeNode(val, nullptr, nullptr);
                }
                else
                {
                    TreeNode* aux = new TreeNode(val, nullptr, currentNode->right);
                    currentNode->right = aux;
                }
            }
            cout<<'\n';
        }

    }
    return root;
}
};