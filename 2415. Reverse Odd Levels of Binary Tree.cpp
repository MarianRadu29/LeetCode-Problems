#include"headers.h"

class Solution {
public:
    TreeNode* reverseOddLevels(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int current_level = 0;
        while(!q.empty()) {
            if (current_level%2==0){
                for(int i=0;i< pow(2,current_level);i++) {
                    TreeNode *current = q.front();
                    q.pop();


                    if (current->left)
                        q.push(current->left);
                    if (current->right)
                        q.push(current->right);
                }
            }
            else
            {
                queue<TreeNode*> QQ;
                vector<int> v;
                for(int i=0;i< pow(2,current_level);i++) {
                    TreeNode *current = q.front();
                    q.pop();
                    v.insert(v.begin(), current->val);
                    QQ.push(current);
                }
                for(int i=0;i< pow(2,current_level);i++) {
                    TreeNode* node = QQ.front();
                    QQ.pop();
                    node->val = v[i];
                    if (node->left)
                        q.push(node->left);
                    if (node->right)
                        q.push(node->right);
                }
            }
            current_level++;

        }
        return root;
    }
};