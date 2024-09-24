#include"headers.h"

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == nullptr)
            return 0;
        return 1 + max(maxDepth(root->left), maxDepth(root->right));
    }
   int run_zigzag(TreeNode* root,bool x)
    {
        if(root)
            switch (x)
            {
                case false:
                    return 1+ run_zigzag(root->left,!x);
                case true:
                    return 1+ run_zigzag(root->right,!x);
            }
        return 0;
    }
    int longestZigZag(TreeNode* root) {
        int result = 0;
        TreeNode* root1 = root;
        int d = maxDepth(root1);
        int i = 0;
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()) {
            int levelSize = q.size();
            for (int k = 0; k < levelSize; k++) {
                TreeNode *current = q.front();
                q.pop();
                TreeNode *node = current;
                int number = max(run_zigzag(node, false), run_zigzag(node, true));
                if (number > result)
                    result = number;

                if (current->left)
                    q.push(current->left);
                if (current->right)
                    q.push(current->right);
            }
            if(result>d-i)
                break;
            i++;

        }

        return result-1;
    }
};