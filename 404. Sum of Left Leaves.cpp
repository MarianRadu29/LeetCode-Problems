#include"headers.h"


class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        if(root->left==nullptr && root->right==nullptr)
                return 0;
        
        int sum=0;
        parcurgere(root,sum);
        return sum;
    }
    void parcurgere(TreeNode* root,int &sum)
    {   
        
        if(root==nullptr)
                return;
        
       // cout<<root->val<<'\n';
        
        if(root->left)
                if(root->left->left==nullptr && root->left->right==nullptr)
                        sum+=root->left->val;
        parcurgere(root->left,sum);
        parcurgere(root->right,sum);
    }
};