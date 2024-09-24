#include"headers.h"

class Solution {
public:
    int countNodes(TreeNode* root) {
        int nr_nod = 0;
        SRD(root,nr_nod);
        return nr_nod;
    }
    void SRD(TreeNode* root,int &c)
    {
        if(root == nullptr)
            return;
        
        SRD(root->left, c);
        c++;
        SRD(root->right,c);
    }
};