#include"headers.h"

class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        int level = 0, max_sum = INT32_MIN, current_level = 1;
        queue<TreeNode*> q;
        q.push(root);
        while (q.empty() == false)
        {
            int nr_nod_per_level = q.size();
            int sum = 0;
            for (int i = 0; i < nr_nod_per_level; i++)
            {
                TreeNode* currentNode = q.front();
                q.pop();
  
                sum+=currentNode->val;

                if (currentNode->left != nullptr) q.push(currentNode->left);
                if (currentNode->right != nullptr) q.push(currentNode->right);
            }
            if (sum > max_sum)
            {
                max_sum = sum;
                level = current_level;
            }
            current_level++;
        }
        return level;
    }
};