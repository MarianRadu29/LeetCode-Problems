#include"headers.h"

class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root)
            {
                if(root->val>=low && root->val<=high)
                {
                    return root->val + rangeSumBST(root->left,low,high) + rangeSumBST(root->right,low,high);
                }
                return  rangeSumBST(root->left,low,high) + rangeSumBST(root->right,low,high);
            }
        return 0;
        
    }
};