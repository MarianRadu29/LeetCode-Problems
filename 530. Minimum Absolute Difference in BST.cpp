#include"headers.h"

class Solution {
public:
    int getMinimumDifference(TreeNode* root) {
        int minn = 100000+1;
        vector<int> list;
        parcurgere(root,list);
        for(int i=0;i<list.size()-1;i++)
            if(abs(list[i]-list[i+1])<minn)
                minn=abs(list[i]-list[i+1]);
        return minn;
    }
    void parcurgere(TreeNode* root,vector<int>& list)
    {
        if(root)
        {
            parcurgere(root->left,list);
            list.push_back(root->val);
            parcurgere(root->right,list);
        }
    }
    
};