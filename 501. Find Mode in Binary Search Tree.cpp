#include"headers.h"

class Solution {
public:
    vector<int> findMode(TreeNode* root) {
        if(root && root->right==nullptr && nullptr==root->left)
            return {root->val};
        map<int,int> m;
        int maxx = -1;
        f(root,m,maxx);
        vector<int> result;
        for(auto it : m)
        {
            if(it.second==maxx)
                result.push_back(it.first);
        };
        return result; 
    }
    void f(TreeNode* root, map<int,int> &m,int &maxx)
    {
        if(root==nullptr)
            return;

        if(m.find(root->val)==m.end())
            m.insert({root->val,1});
        else
            m[root->val]++;
            
        if(maxx<m[root->val])
            maxx = m[root->val];
        f(root->left,m,maxx);
        f(root->right,m,maxx);
    }
};