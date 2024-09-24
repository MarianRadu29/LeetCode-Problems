#include"headers.h"

class Solution {
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        if(!root)
            return {};
        vector<vector<int>> result;
        vector<int> current;
        generate(root,result,current,targetSum);
        return result;
    }
    int vecsum(vector<int> &v)
    {
        int result = 0;
        for(int i: v)
            result+=i;
        return result;
    }
    void generate(TreeNode* root,vector<vector<int>> &result,vector<int> current,int target)
    {   
        current.push_back(root->val);

        if(root->left==nullptr && root->right==nullptr && vecsum(current)==target)
            {   for(int i:current)
                    cout<<i<<' ';
                cout<<'\n';
                result.push_back(current);
                return;
            }

        if(root->left)
            generate(root->left,result,current,target);
        if(root->right)
            generate(root->right,result,current,target);
    }
};