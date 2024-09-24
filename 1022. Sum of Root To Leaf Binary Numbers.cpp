#include"headers.h"

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int BNumber(vector<int> v)
    {
        int x = 0,p=1;
        for(int i=v.size()-1;i>=0;i--)
        {
            x = x + v[i]*p;
            p*=2;
        }
        return x;
    }
    int sumRootToLeaf(TreeNode* root) {
        vector<vector<int>> result;
        vector<int> curent;
        generatePaths(root,curent,result);
        int sum = 0;
        for(int i=0;i<result.size();i++)
           sum+=BNumber(result[i]);
        return sum;
        
    }
    void generatePaths(TreeNode* root, std::vector<int>& path, std::vector<std::vector<int>>& paths) {
        if (!root) return;

        path.push_back(root->val);

        if (!root->left && !root->right) {
            paths.push_back(path);
        } else {
            generatePaths(root->left, path, paths);
            generatePaths(root->right, path, paths);
        }

        path.pop_back();
    }
};