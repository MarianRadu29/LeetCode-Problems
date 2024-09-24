#include"headers.h"


class BSTIterator {
    
    vector<int> iterator;
    int curent;
    void SRD(TreeNode* root,vector<int> &v)
    {
        if(root==nullptr)
            return;
        SRD(root->left,v);
        v.push_back(root->val);
        SRD(root->right,v);
    }
public:
    BSTIterator(TreeNode* root):curent(0) {
        SRD(root,iterator);
    }
    
    int next() {
        return iterator[curent++];
    }
    
    bool hasNext() {
        if(curent>=iterator.size())
            return false;
        return true;
    }
};
